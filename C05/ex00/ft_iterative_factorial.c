/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:19:06 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/25 22:22:02 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
int	main(void)
{
	int	nb;

	nb = -720;
	printf("%i\n", ft_iterative_factorial(nb));
	return (0);
}
*/
