/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:40:34 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/25 22:25:42 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	int	nb;

	nb = -42;
	printf("%i\n", ft_recursive_factorial(nb));

	return (0);
}
*/
