/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:42:30 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/18 15:47:49 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	src_count;
	int	dst_count;

	src_count = 0;
	dst_count = 0;
	while (dest[dst_count] != '\0')
		dst_count++;
	while (src[src_count] != '\0')
	{
		dest[dst_count] = src[src_count];
		dst_count++;
		src_count++;
	}
	dest[dst_count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[7] = "dest";
	char	*src;

	src = "abc";
	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
