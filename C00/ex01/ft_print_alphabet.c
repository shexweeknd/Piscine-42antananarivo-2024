/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:25:09 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/13 18:28:23 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		a;
	char	c;

	a = 97;
	while (a <= 122)
	{
		c = a + '\0';
		ft_putchar(c);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
