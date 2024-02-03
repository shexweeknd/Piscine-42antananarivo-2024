/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:07:04 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:03:43 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_max
{
	int		x;
	int		y;
	int		max_of_s;
}			t_max;

typedef struct s_buffer
{
	int		*numbers;
	char	*chars;
}			t_buffer;

int		**ft_allocate_map(int row, int col);
int		ft_convert(char c);
void	ft_split_map(int *buffer, int **map, int col, int row);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		min(int a, int b, int c);
int		**ft_generate_sub(int **map, int col, int row);
t_max	ft_get_max(int **sub, int row, int col);
char	**ft_allocate_res(int row, int col);
void	ft_split_res(char *buffer, char **res, int col, int row);
void	ft_format_res(char **res, t_max max);
void	ft_print_res(char **res, int col, int row);
void	ft_print(char *path, int col, int row);

#endif
