/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 07:26:39 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 21:48:13 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	buffer = (int *)malloc(sizeof(int) * (max - min));
	if (!buffer || buffer == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	*range = buffer;
	return (max - min);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;

	min = 4;
	max = 8;
	printf("range size : %d\n", ft_ultimate_range(&tab, min, max));
	i = 0;
	while (i < max - min)
	{
		printf("range[%d] : %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/
