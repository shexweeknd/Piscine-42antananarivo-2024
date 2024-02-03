/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:29:29 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/26 20:36:10 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_diag(int	map[4][4], int x, int y)
{
	int g;
	int d;

	g = x - 1;
	d = x + 1;
	while (y >= 0)
	{
		if (map[y][g] != 0 || map[y][d] != 0)
			return (1);
		g--;
		d++;
		y--;
	}
	return (0);
}

int is_col(int map[4][4], int x, int y)
{
	while (y >= 0)
	{
		if (map[y][x])
			return (1);
		y--;
	}
	return (0);
}

int is_authorized(int map[4][4], int x, int y)
{
	if (is_diag(map, x, y) == 1 || is_col(map, x, y) == 1)
		return (0);
	return (1);
}

void reset_map(int map[4][4], int n)
{
	int x;
	int y;

	y = 0;
	while (y <= n -1)
	{
		x = 0;
		while (x <= n - 1)
		{
			map[y][x] = 0;
			x++;
		}
		y++;
	}
}

void aff_map(int map[4][4], int n)
{
	int x;
	int y;
	int nb;

	y = 0;
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			nb = map[x][y];
			nb += 48;
			write(1, &nb, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	write(1, "-----------------", 17);
}

int ft_solve(int map[4][4], int x, int y, int n)
{
	int res;

	if (x == 0 && y ==0)
	{
		map[y][x] = 1;
		ft_solve(map, x, y + 1, n);
		return (1);
	}
	while ((x < n) && !is_authorized(map, x, y))
		x++;
	
	if ((y == n - 1) && is_authorized(map, x, y)) //success vers la fin de ligne, pret a remonter
	{
		map[x][y] = 1;
		return (1);
	}
	else if ((x == n - 1) && !is_authorized(map, x, y)) //fail vers la fin de ligne, pret a remonter
		return (0);
	
	//partie choix
	map[x][y] = 1;
	res = ft_solve(map, 0, y + 1, n);
	if (res && y == 0) //j'ai trouve une solution et je suis pret pour trouver une autre
	{
		aff_map(map, n);
		reset_map(map, n);
		if (x < n)
			ft_solve(map, x + 1, y, n);
		else
			return (1);
	}
	if (res == 1) // j'ai eu un succes sur la ligne suivante, je veux remonter
		return (res);
	map[x][y] = 0; // je n'ai pas ete authorise a placer sur la ligne suivante, je veux passer a la colonne suivante
	ft_solve(map, x + 1, y, n);
	return (res);
}

int	ft_ten_queens_puzzle(void)
{
	int sol_nb;
	int n = 4;
	int map[n][n];

	sol_nb = 0;
	//programme principal
	ft_solve(map, 0, 0, n);
	
	return (sol_nb);
}

int main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
