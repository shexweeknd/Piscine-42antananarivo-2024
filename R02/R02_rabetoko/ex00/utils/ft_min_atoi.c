/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:35:59 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/28 21:19:03 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_min_atoi(char *str)
{
	int		i;
	char	*formatted_input;

	i = 0;
	while (ft_is_space(*str))
		str++;
	while ((*str == '-') || *str == '+')
		str++;
	formatted_input = (char *)malloc(sizeof(char *) * 64);
	while (*str >= '0' && *str <= '9')
	{
		formatted_input[i] = *str;
		str++;
		i++;
	}
	return (formatted_input);
}
