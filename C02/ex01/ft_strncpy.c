/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:15:13 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 22:20:52 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>

void	aff_tab(char *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		printf("%c", tab[i]);
		i++;
	}
	printf("\n");
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	size = 6;
	char	src[] = "abc";
	char	dest[size];

	ft_strncpy(dest, src, size);
	aff_tab(dest, size);
	return (0);
}
*/
