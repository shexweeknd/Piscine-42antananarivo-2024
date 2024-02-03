/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 06:32:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/29 07:23:09 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		s;

	s = 0;
	while (src[s])
		s++;
	dup = (char *)malloc(sizeof(char) * s);
	s = 0;
	while (*src)
	{
		dup[s] = *src;
		src++;
		s++;
	}
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dup;

	src = "duplicate me please :'(";
	dup = ft_strdup(src);
	printf("%s\n", dup);
	free(dup);
	return (0);
}*/
