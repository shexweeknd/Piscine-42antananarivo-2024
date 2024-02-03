/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:48:07 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/21 19:54:13 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_up(int map[4][4], int up[4])
{
	int	x;
	int	y;
	int	n;

	x = 0;
	y = 0;
	while (y < 4)
	{
		if (up[y] == 1)
		{
			map[x][y] = 4;
		}
		else if (up[y] == 4)
		{
			n = 1;
			while (n <= 4)
			{
				map[n - 1][y] = n;
				n++;
			}
		}
		y++;
	}
}

void	check_down(int map[4][4], int down[4])
{
	int	x;
	int	y;
	int	n;

	x = 3;
	y = 0;
	while (y < 4)
	{
		if (down[y] == 1)
		{
			map[x][y] = 4;
		}
		else if (down[y] == 4)
		{
			n = 1;
			while (n <= 4)
			{
				map[4 - n][y] = n;
				n++;
			}
		}
		y++;
	}
}

void	check_right(int map[4][4], int right[4])
{
	int	x;
	int	y;
	int	n;

	x = 0;
	y = 3;
	while (x < 4)
	{
		if (right[x] == 1)
		{
			map[x][y] = 4;
		}
		else if (right[x] == 4)
		{
			n = 1;
			while (n <= 4)
			{
				map[x][4 - n] = n;
				n++;
			}
		}
		x++;
	}
}

void	check_left(int map[4][4], int left[4])
{
	int	x;
	int	y;
	int	n;

	x = 0;
	y = 0;
	while (x < 4)
	{
		if (left[x] == 1)
		{
			map[x][y] = 4;
		}
		else if (left[x] == 4)
		{
			n = 1;
			while (n <= 4)
			{
				map[y][n - 1] = n;
				n++;
			}
		}
		x++;
	}
}
