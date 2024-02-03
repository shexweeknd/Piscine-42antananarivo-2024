/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:29:07 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 21:12:02 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

int	ft_error(int argc, char *str)
{
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	return (1);
}
