/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:14:05 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/25 22:04:09 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (!(s1[i] == s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}

char	**insert_sort_by_ascii(char **argv, int argc)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = i + 1;
	while (j < argc)
	{
		if (ft_strcmp(argv[j], "") == 0)
			tmp = "";
		else
			tmp = argv[j];
		while (i >= 1)
		{
			if ((ft_strcmp(argv[i], tmp) > 0))
				argv[i + 1] = argv[i];
			else
				break ;
			i--;
		}
		argv[i + 1] = tmp;
		j++;
		i = j - 1;
	}
	return (argv);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	**array;

	if (!argc)
		return (1);
	i = 1;
	array = insert_sort_by_ascii(argv, argc);
	while (array[i])
	{
		ft_putstr(array[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
