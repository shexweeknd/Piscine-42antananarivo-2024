/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:27 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/23 19:35:15 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

*/
int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	res = 1;
	while (power-- > 0)
		res *= nb;
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 5;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
*/
