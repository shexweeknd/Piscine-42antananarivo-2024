/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:49:47 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/31 08:01:32 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_power(int nbr, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nbr);
	return (nbr * ft_power(nbr, --power));
}

void	convert(int nbr, char *base_to, int i, char *buffer)
{
	int	nbr_base;

	nbr_base = 0;
	while (base_to[nbr_base])
		nbr_base++;
	if (!nbr_base)
		return ;
	if (nbr < nbr_base)
		buffer[i] = base_to[nbr % nbr_base];
	else if (nbr >= nbr_base)
	{
		convert(nbr / nbr_base, base_to, i - 1, buffer);
		buffer[i] = base_to[nbr % nbr_base];
	}
}

char	*to_base(int nbr, char *base_to)
{
	char	*buffer;
	int		i;
	int		tmp;

	buffer = (char *)malloc(sizeof(char) * 255);
	if (!buffer)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		i++;
		buffer[0] = '-';
		nbr *= -1;
	}
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	convert(nbr, base_to, i - 1, buffer);
	return (buffer);
}

int	recurse_ten(char *nbr, char *base, int s)
{
	int	pos;
	int	poids;
	int	base_size;

	// calculer la base_size
	base_size = 0;
	while (base[base_size])
		base_size++;
	// calculer pos
	pos = 0;
	while (base[pos] && *nbr)
	{
		if (*nbr == base[pos])
			break ;
		pos++;
	}
	// calculer poids
	poids = 0;
	while (nbr[poids])
		poids++;
	// base case
	if (poids == 0)
		return (pos * base_size * s);
	// general case
	return (pos * ft_power(base_size, poids - 1) * s + recurse_ten(nbr += 1,
			base, s));
}

int	verify_errors(char *nbr, char *base)
{
	int	i;
	int	j;

	if (!*base) // base vide
		return (1);
	i = 0; // base contient deux fois le meme caractere
	while (base[i])
	{
		j = i + 1;
		while (base[j])
			if (base[j++] == base[i])
				return (1);
		i++;
	}
	i = 0; // base contient + - ou whitespace
	while (base[i])
		if (base[i++] <= 32)
			return (1);
	i = 0; // nbr n'existe pas dans base
	while (nbr[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == nbr[i])
				break ;
			if (!base[++j])
				nbr[i] = '\0';
		}
		i++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_base;
	char	*buffer;
	int		sign;

	nbr_base = 0;
	while (base_from[nbr_base])
		nbr_base++;
	sign = 1;
	while (*nbr <= 32)
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	if (verify_errors(nbr, base_from) || verify_errors("", base_to))
		return (NULL);
	buffer = to_base(recurse_ten(nbr, base_from, sign), base_to); // base_10
	return (buffer);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*buffer;

	if (argc != 4)
		return (-1);
	if (argc == 4)
	{
		buffer = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s\n", buffer);
		free(buffer);
	}
	return (0);
}

//./a.out -24647464 0123456789 01
//./a.out -2464 0123456789 01
