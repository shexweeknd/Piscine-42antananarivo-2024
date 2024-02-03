/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:39:18 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/30 14:15:39 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recurse_nbr(int nbr, char *base)
{
	int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	if (base_size == 0)
		return (0);
	if (nbr >= base_size)
	{
		recurse_nbr(nbr / base_size, base);
		ft_putchar(base[nbr % base_size]);
	}
	else if (nbr < base_size)
	{
		ft_putchar(base[nbr % base_size]);
	}
}

int	verify_errors(char *base)
{
	int	y;
	int	x;

	if (!base || !base[1])
		return (0);
	y = 0;
	while (base[y])
	{
		if (base[y] == '+' || base[y] == '-' || base[y] <= 32)
			return (0);
		y++;
	}
	x = 0;
	while (base[y])
	{
		x = y + 1;
		while (base[x])
		{
			if (base[x] == base[y])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	x;
	int	y;

	if (!verify_errors(base))
		return ;
	y = 0;
	while (base[y])
	{
		x = y + 1;
		while (base[x])
		{
			if (base[x] == base[y])
				return ;
			x++;
		}
		y++;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	recurse_nbr(nbr, base);
}
/*
int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 2;
	base = 0;
	ft_putnbr_base(nbr, base);
	return (0);
}
*/
