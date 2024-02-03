/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:06:33 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:07:30 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"
#include "../includes/ft_utils.h"
#include <stdio.h>

void	ft_split_map(int *buffer, int **map, int col, int row)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	x = 0;
	while (i < ((col + 1) * row))
	{
		if (buffer[i] == -1)
		{
			x = 0;
			y++;
		}
		else
		{
			map[y][x] = buffer[i];
			x++;
		}
		i++;
	}
}

void	ft_split_res(char *buffer, char **res, int col, int row)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	x = 0;
	while (i < ((col + 1) * row))
	{
		if (buffer[i] == '\n')
		{
			x = 0;
			y++;
		}
		else
		{
			res[y][x] = buffer[i];
			x++;
		}
		i++;
	}
}

t_max	ft_get_max(int **sub, int row, int col)
{
	int		i;
	int		j;
	t_max	max;

	i = 0;
	max.max_of_s = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (max.max_of_s < sub[i][j])
			{
				max.max_of_s = sub[i][j];
				max.y = i;
				max.x = j;
			}
			j++;
		}
		i++;
	}
	return (max);
}

void	ft_format_res(char **res, t_max max)
{
	int	i;
	int	j;

	i = max.y;
	while (i > max.y - max.max_of_s)
	{
		j = max.x;
		while (j > max.x - max.max_of_s)
		{
			res[i][j] = 'x';
			j--;
		}
		i--;
	}
}

void	ft_print(char *path, int col, int row)
{
	int			**map;
	int			**sub;
	char		**res;
	t_buffer	buffer;
	t_max		max;

	map = ft_allocate_map(row, col);
	res = ft_allocate_res(row, col);
	buffer = ft_get_buffer(path, ((row + 1) * col));
	ft_split_map(buffer.numbers, map, col, row);
	ft_split_res(buffer.chars, res, col, row);
	sub = ft_generate_sub(map, col, row);
	max = ft_get_max(sub, row, col);
	ft_format_res(res, max);
	ft_print_res(res, col, row);
	free(map);
	free(res);
	free(buffer.chars);
	free(buffer.numbers);
	free(sub);
}
