/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:28:22 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/30 10:21:06 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

void	ft_manage_dict(char *digits, char **dict, int counter_rows)
// recherche de digit dans le dict
{
	int j;

	j = 0;
	while (j < 3)
	{
		if (digits[j] != '0')
		{
			if (j == 0)
				ft_first_digit(dict, digits[j], counter_rows); // hundred
			if (j == 1)
				ft_second_digit(dict, digits, counter_rows); // order of 10*i++
			if (j == 2 && digits[1] != '1')
				ft_third_digit(dict, digits[j], counter_rows); // order of 10
		}
		j++;
	}
}

int	ft_manage(char *dict, char *str)
{
	char	**arr;
	char	**array;
	int		counter_rows;
	int		i;

	i = 0;
	arr = ft_allocate(str);
	// tableau regroupant les 3 digits ["002","723"]
	array = ft_copy_dict_array(dict); // tableau regroupant les ["0: one"], ...
	counter_rows = ft_counter_rows(ft_read_dict(dict));
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0')
	{
		ft_read_words(ft_strstr(array, counter_rows, "0"));
		// lis et affiche les lettres dans le array "0: zero" cad "zero"
		return (0);
	}
	while (i < (ft_strlen(str) / 3 + ft_module(str)))
	// i < (total slot numbers)
	{
		ft_manage_dict(arr[i], array, counter_rows);
		// rehcherche chaque 3 digit de arr[i] dans le dict et l'affiche avec ses ord grace a first second et third
		if (ft_strcmp(arr[i++], "000") != 0)
			// si "0: zero" == "000" n'affiche pas le ord actuel
			ft_ord(array, counter_rows, ft_strlen(str) / 3 + ft_module(str), i);
		// affcihe le ord "thousand million etc..."
	}
	free(arr);
	free(array);
	return (0);
}
