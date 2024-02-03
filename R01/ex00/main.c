/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 06:44:07 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/21 22:32:51 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	aff_map(int map[4][4]);

void	check_col_col(int up[4], int down[4], int map[4][4]);

void	check_row_row(int left[4], int right[4], int map[4][4]);

void	check_up(int map[4][4], int up[4]);

void	put_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	up[4] = {4, 3, 2, 1};
	int	map[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	if (argc > 2 || !argv[1])
		return (0);
	check_up(map, up);
	put_error();
	return (0);
}
/*
	int up[4] =  {4, 3, 2, 1};
	int down[4] = {1, 2, 2, 2};
	int left[4] = {4, 3, 2, 1};
	int right[4] = {1, 2, 3, 2};
	int map[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
	check_up(map, up);
	check_up(map, up);
	check_left(map, left);
	check_down(map, down);
	check_right(map, right);
	check_col_col(up,down,map);
	check_row_row(left,right,map);
	aff_map(map);
	return (0);
}*/
