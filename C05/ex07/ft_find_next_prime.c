/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:24:09 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/27 09:50:19 by hramaros         ###   ########.fr       */
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
	while (d <= 46340)
	{
		r = nb % d;
		if (r == 0)
			return (0);
		d += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (nb)
	{
		if (ft_is_prime(nb))
			break ;
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;

	nb = 7;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
*/
