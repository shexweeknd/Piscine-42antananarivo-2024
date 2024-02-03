/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:27:28 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 21:02:26 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
