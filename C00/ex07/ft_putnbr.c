/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:47:41 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/21 16:39:25 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}
/*
int	main(void)
{
	int	number;

	number = -2147483648;
	ft_putnbr(number);
	return (0);
}
*/
