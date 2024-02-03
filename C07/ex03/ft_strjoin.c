/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:07:34 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 21:46:49 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_len(char *str)
{
	int	s;

	s = 0;
	while (str[s])
		s++;
	return (s);
}

char	*allocate(int size, char **strs, char *sep)
{
	int		total;
	int		i;
	char	*buffer;

	total = 0;
	i = 0;
	while (i < size)
		total += get_len(strs[i++]);
	total += get_len(sep) * (size - 1);
	if (size <= 0)
		total = 1;
	buffer = (char *)malloc(sizeof(char) * total);
	if (!buffer)
		return (NULL);
	return (buffer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*buffer;

	buffer = allocate(size, strs, sep);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			buffer[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
			buffer[k++] = sep[j++];
		i++;
	}
	buffer[k] = '\0';
	return (buffer);
}
/*
int	main(void)
{
	char **strs;
	char *sep;
	int size;
	char *res;

	size = 4;
	strs = calloc(size, sizeof(char *));

	sep = ", ";
	strs[0] = "Bonjour";
	strs[1] = "42";
	strs[2] = "vogon";
	strs[3] = "haha";
	res = ft_strjoin(size, strs, sep);
	printf("resultat : %s\n", res);
}*/