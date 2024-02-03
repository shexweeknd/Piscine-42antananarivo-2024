/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:01:53 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/02 00:04:11 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;

#include <stdlib.h>

void	struct_cpy(t_stock_str var, t_stock_str *buff, int i)
{
	buff[i].size = var.size;
	buff[i].str = var.str;
	buff[i].copy = var.copy;
}

char	*ft_strdup(char *str)
{
	char	*buffer;
	int		size;
	int		i;

	size = 0;
	while (str[size])
		size++;
	buffer = malloc(sizeof(char) * size);
	i = 0;
	while (i < size && str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buff;
	t_stock_str	var;
	int			size;
	int			i;
	char		*copy;
	char		*str;

	buff = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	i = 0;
	while (i < ac)
	{
		var = (t_stock_str)malloc(sizeof(t_stock_str));
		size = 0;
		while (av[i][size])
			size++;
		var.size = size;
		var.str = av[i];
		var.copy = ft_strdup(av[i]);
		buff[i] = var;
		i++;
	}
	return (buff);
}
