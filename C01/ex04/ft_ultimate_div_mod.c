/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 02:38:24 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 18:03:28 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 13;
	nbr2 = 7;
	//printf("a: %d\nb: %d\n", nbr1, nbr2);
	ft_ultimate_div_mod(&nbr1, &nbr2);
	//printf("a: %d\nb: %d\n", nbr1, nbr2);
	return (0);
}
*/
