/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 02:17:38 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 02:36:26 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	div = malloc(4);
	mod = malloc(4);
	a = 12;
	b = 10;
	ft_div_mod(a, b, div, mod);
	printf("a: %d\nb: %d\na / b: %d\na mod b: %d\n", a, b, *div, *mod);
	free(div);
	free(mod);
	return (0);
}
*/
