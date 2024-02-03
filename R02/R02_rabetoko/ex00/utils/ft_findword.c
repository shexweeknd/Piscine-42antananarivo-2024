/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:00:26 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/30 09:21:35 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

// compare to_find "2" par rapport "0: zero" et ainsi de suite
char	*ft_strstr(char **str_array, int array_l, char *to_find)
{
	int	str_i;
	int	find_i;
	int	index;

	str_i = 0;
	index = 0;
	find_i = 0;
	while (str_i < array_l)
	{ // to_find[find_i] reste "2"
		while (to_find[find_i] && (to_find[find_i] == str_array[str_i][index]))
		{
			find_i++;
			index++;
			if (str_array[str_i][index] == ':' && to_find[find_i] == '\0')
			{
				return (str_array[str_i]); // une ligne dans le tableau 2d
			}
		}
		str_i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}
