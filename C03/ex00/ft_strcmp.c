/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:21:57 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/19 15:35:38 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (!(s1[i] == s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "";
	s2 = "";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/
