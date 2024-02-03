/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:35:51 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/19 15:20:29 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	count(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = count(dest);
	slen = count(src);
	i = 0;
	j = dlen;
	if (size == 0)
		return (slen);
	while (src[i] && (j < size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size <= dlen)
		return (slen + size);
	return (dlen + slen);
}
/*
int	main(void)
{
	unsigned int	size;
	char			dst[] = "q";
	char			src[] = "123";

	size = 1;
	printf("---before---\n");
    printf("src : %s\ndst : %s\n", src, dst);
    printf("---after----\n");
    printf("%d\n", ft_strlcat(dst, src, size));
    printf("src : %s\ndst : %s\n", src, dst);
	return (0);
}
*/
