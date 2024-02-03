/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:00:46 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/30 08:17:54 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

char	*ft_read_dict(char *dict)
{
	int		fd;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * 2000);
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Dict read error\n");
		return (0);
	}
	read(fd, buf, 1000);
	close(fd);
	return (buf);
}

int	ft_counter_rows(char *buf)
{
	int	j;
	int	rows;

	j = 0;
	rows = 0;
	while (buf[j])
	{
		if (buf[j++] == '\n')
			rows++;
	}
	return (rows);
}

char	**ft_alloc_array(char *buf)
{
	char	**array;
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * ft_counter_rows(buf));
	while (i < ft_counter_rows(buf))
	{
		counter = 0;
		while (buf[j] != '\n')
		{
			counter++;
			j++;
		}
		j++;
		array[i++] = (char *)malloc(sizeof(char) * (counter + 1));
	}
	return (array);
}

char	**ft_copy_dict_array(char *dict)
		// retourne un array de ligne par ligne du contenu de dict array[0] = "0: zero"
{
	int i;
	int j;
	int k;
	char *buf;
	char **array;

	buf = ft_strdup(ft_read_dict(dict));
	i = 0;
	j = 0;
	array = ft_alloc_array(buf);
	while (i < ft_counter_rows(buf))
	{
		k = 0;
		while (buf[j] != '\n')
			array[i][k++] = buf[j++];
		array[i][k] = '\0';
		j++;
		i++;
	}
	free(buf);
	return (array);
}
