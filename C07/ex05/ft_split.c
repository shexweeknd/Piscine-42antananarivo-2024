/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:34:42 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 11:26:37 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*buffer;
	int		i;

	i = 0;
	while (str[i])
		i++;
	buffer = (char *)malloc(sizeof(char) * i);
	if (!buffer)
		return (NULL);
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	return (buffer);
}

int	occur(char *str, char *to_find)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (!to_find[j + 1])
			{
				res++;
				break ;
			}
			j++;
			i++;
		}
		i++;
	}
	return (res + 1);
}

char	**ft_allocate(int rows)
{
	char	**buffer2d;
	int		i;

	buffer2d = (char **)malloc(sizeof(char *) * rows);
	i = 0;
	while (i < 2)
	{
		buffer2d[i] = (char *)malloc(sizeof(char) * 1024);
		i++;
	}
	return (buffer2d);
}

char	**ft_split(char *str, char *charset)
{
	char			*buffer1d;
	char			**buffer2d;
	unsigned int	rows;
	unsigned int	c;
	unsigned int	x;
	unsigned int	y;

	// get the numbers of occurence
	rows = occur(str, charset);
	// malloc arrays
	buffer2d = ft_allocate(rows);
	// split algorithm
	y = 0;
	x = 0;
	while (*buffer1d)
	{
		if (*buffer1d != charset[0])
		{
			buffer2d[y][x] = *buffer1d;
			x++;
			y++;
		}
		else if (*buffer1d == charset[0])
		{
			c = 0;
			while (charset[c] && *(buffer1d + c) == charset[c])
				c++;
			if (charset[c] == '\0')
				buffer1d += c;
			if (charset[c] != '\0')
			{
				buffer2d[y][x] = *buffer1d;
				y++;
				x++;
			}
		}
		buffer1d++;
	}
	free(buffer1d);
	return (buffer2d);
}

int	main(void)
{
	char	*str;
	char	*charset;
	char	**buffer;

	str = "dodo, zaza";
	charset = ", ";
	buffer = ft_split(str, charset);
	free(buffer);
	return (0);
}
