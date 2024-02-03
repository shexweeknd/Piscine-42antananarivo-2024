/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:04:58 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/27 09:48:28 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	d;
	int	r;

	if (nb <= 0 || nb == 1)
		return (0);
	d = 2;
	r = nb % d;
	if (r == 0)
		return (0);
	while (d <= 46341)
	{
		r = nb % d;
		if (r == 0)
			return (0);
		d += 1;
	}
	return (1);
}
/*
int	main(void)
{
	int	nb;

	nb = 2147483647;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}
*/
