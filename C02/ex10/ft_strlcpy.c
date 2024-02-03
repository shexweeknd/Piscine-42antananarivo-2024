/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 01:31:46 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/21 21:06:44 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int	main(void)
{
	unsigned int	size = 3;
	char			src[] = "123";
	char			dest[size];
	unsigned int	ret;

	ret = ft_strlcpy(dest, src, size);
	printf("dest : %s\n", dest);
	printf("ret : %d\n", ret);
	return (0);
}
*/