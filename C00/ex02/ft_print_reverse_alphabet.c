/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:25:09 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/13 18:28:44 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		a;
	char	c;

	a = 122;
	while (a >= 97)
	{
		c = a + '\0';
		ft_putchar(c);
		a--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();	

	return (0);
}
*/
