/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:29:53 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 18:47:55 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

void	ft_puterror(char *err)
{
	while (*err != 0)
		write(2, err++, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
