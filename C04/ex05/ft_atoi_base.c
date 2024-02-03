/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:18:07 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/30 11:55:15 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//TODO fontion complete de atoi
//\n \t ... dans base

int	isn_inside(char *str, char *base)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (base[len])
		len++;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				break ;
			j++;
			if (j == len)
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_verify_err(char *nbr, char *base)
{
	int	i;
	int	j;

	if (!*base || !base[1])
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (1);
		i++;
	}
	if (isn_inside(nbr, base))
		return (1);
	return (0);
}

int	ft_power(int nbr, int exp)
{
	if (exp == 1)
		return (nbr);
	if (exp == 0)
		return (1);
	return (nbr * ft_power(nbr, --exp));
}

int	recurse(char *str, char *base, int nbr_base, int sign)
{
	int	poids;
	int	pos;

	pos = 0;
	while (base[pos] && *str)
	{
		if (*str == base[pos])
			break ;
		pos++;
	}
	poids = 0;
	while (str[poids])
		poids++;
	if (poids == 0)
		return (pos * nbr_base * sign);
	return (pos * ft_power(nbr_base, poids - 1) * sign + recurse(str += 1, base,
			nbr_base, sign));
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr_base;
	int	sign;

	sign = 1;
	while (*str == '+' || *str == '-'
			|| (*str >= 9 && *str <= 13) || *str == ' ')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (ft_verify_err(str, base))
		return (0);
	nbr_base = 0;
	while (base[nbr_base])
		nbr_base++;
	return (recurse(str, base, nbr_base, sign));
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (1);
	}
//	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	printf("%d\n", ft_atoi_base(argv[1], "0\n1"));
	return (0);
}

