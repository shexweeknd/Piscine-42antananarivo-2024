/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:06:37 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/23 20:45:40 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

*/
int	ft_sqrt(int nb)
{
	int	init;

	if (nb == 0 || nb == 1)
		return (nb);
	init = 2;
	while (init++ <= 46339)
	{
		if ((init * init) == nb)
			return (init);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 49;
	printf("%i\n", ft_sqrt(nb));
	return (0);
}
*/
