/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 00:01:02 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/11 00:16:03 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	a;

	a = 0;
	while (a < 10)
	{
		ft_putchar(a + '0');
		a++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
