/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:06:43 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:11:32 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"
#include <stdio.h>

int	ft_get_row(char *path)
{
	int		fd;
	int		count;
	char	c;

	fd = open(path, O_RDONLY);
	count = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			count++;
	}
	close(fd);
	return (count - 1);
}

int	ft_get_col(char *path)
{
	int		fd;
	int		count;
	char	c;

	fd = open(path, O_RDONLY);
	count = 0;
	while (read(fd, &c, 1) && c != '\n')
		;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		count++;
	}
	close(fd);
	return (count);
}

t_buffer	ft_get_buffer(char *path, int length)
{
	t_buffer	buffer;
	int			fd;
	char		c;
	int			i;

	fd = open(path, O_RDONLY);
	buffer.numbers = (int *)malloc(sizeof(int) * length);
	buffer.chars = (char *)malloc(sizeof(char) * length);
	if (!buffer.numbers || !buffer.chars || fd < 0)
		return (buffer);
	while (read(fd, &c, 1) && c != '\n')
		;
	i = 0;
	while (i < length)
	{
		read(fd, &c, 1);
		buffer.numbers[i] = ft_convert(c);
		buffer.chars[i] = c;
		i++;
	}
	return (buffer);
}
