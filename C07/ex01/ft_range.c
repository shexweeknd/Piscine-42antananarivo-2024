/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 06:45:15 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/29 18:23:28 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*buff;
	int	i;

	if (min >= max)
		return (NULL);
	buff = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		buff[i] = min++;
		i++;
	}
	return (buff);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*buff;
	int	min;
	int max;
	int	i;

	min = 2;
	max = 4;
	buff = ft_range(min, max);
	i = 0;
	while (buff[i])
	{
		printf("%d\n", buff[i]);
		i++;
	}
	free(buff);
	return (0);
}
*/
