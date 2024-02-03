/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:53:41 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/21 19:54:46 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_map(int map[4][4])
{
	int		x;
	int		y;
	char	c;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			c = map[x][y] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void	check_col_col(int up[4], int down[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (up[i] == 3 && down[i] == 2)
		{
			map[2][i] = 4;
		}
		else if (up[i] == 2 && down[i] == 3)
		{
			map[1][i] = 4;
		}
		i++;
	}
}

void	check_row_row(int left[4], int right[4], int map[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (left[i] == 3 && right[i] == 2)
		{
			map[i][2] = 4;
		}
		else if (left[i] == 2 && right[i] == 3)
		{
			map[i][1] = 4;
		}
		i++;
	}
}
