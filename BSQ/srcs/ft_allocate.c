/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:09:20 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:09:42 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int	**ft_allocate_map(int row, int col)
{
	int	**map;
	int	i;

	i = 0;
	map = (int **)malloc(sizeof(int *) * row);
	if (!map)
		return (0);
	while (i < col)
	{
		map[i] = (int *)malloc(sizeof(int) * col);
		i++;
	}
	return (map);
}

char	**ft_allocate_res(int row, int col)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * row);
	if (!res)
		return (0);
	while (i < col)
	{
		res[i] = (char *)malloc(sizeof(char) * col);
		i++;
	}
	return (res);
}
