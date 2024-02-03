/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:06:53 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:08:20 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"
#include "../includes/ft_utils.h"

int	ft_convert(char c)
{
	if (c == '.')
		return (1);
	else if (c == 'o')
		return (0);
	return (-1);
}

int	min(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	ft_init_sub(int **sub, int **map, int col, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		sub[i][0] = map[i][0];
		i++;
	}
	j = 0;
	while (j < col)
	{
		sub[0][j] = map[0][j];
		j++;
	}
}

int	**ft_generate_sub(int **map, int col, int row)
{
	int	**sub;
	int	i;
	int	j;

	sub = ft_allocate_map(row, col);
	ft_init_sub(sub, map, col, row);
	i = 1;
	while (i < row)
	{
		j = 1;
		while (j < col)
		{
			if (map[i][j] == 1)
				sub[i][j] = min(sub[i][j - 1], sub[i - 1][j], sub[i - 1][j - 1])
					+ 1;
			else
				sub[i][j] = 0;
			j++;
		}
		i++;
	}
	return (sub);
}

void	ft_print_res(char **res, int col, int row)
{
	int	x;
	int	y;

	y = 0;
	while (y < row)
	{
		x = 0;
		while (x < col)
		{
			ft_putchar(res[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
