/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_words.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:31:59 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 18:48:02 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

int	ft_read_words(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str[0])
		return (0);
	while (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
			&& str[i] <= 'Z'))
	{
		i++;
	}
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
