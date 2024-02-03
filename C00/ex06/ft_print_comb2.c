/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:10:49 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/13 18:41:49 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*raisonnement par incrementation de deux variables*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separator(int a, int b)
{
	if (a <= 98 && b <= 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	put_number_to_string(int number)
{
	char	c1;
	char	c2;

	c1 = number / 10 + '0';
	c2 = number % 10 + '0';
	ft_putchar(c1);
	ft_putchar(c2);
}

void	ft_format_comb(int a, int b)
{
	put_number_to_string(a);
	ft_putchar(' ');
	put_number_to_string(b);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_format_comb(a, b);
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return(0);
}
*/
