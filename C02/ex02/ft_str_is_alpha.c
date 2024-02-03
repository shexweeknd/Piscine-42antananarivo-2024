/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:22:03 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/16 00:59:21 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
renvoie 1 si la chaîne passée en paramètre ne contient que
des caractères alphabétiques et renvoie 0 si la chaîne
passée en paramètre contient
d’autres types de caractères
Elle devra renvoyer 1 si str est une chaîne vide.


#include <stdio.h>

#define COND1 ((str[i] >= 'A') && (str[i] <= 'Z'))
#define COND2 ((str[i] >= 'a') && (str[i] <= 'z'))
*/
int	ft_str_is_alpha(char *str)
{
	char	s;
	int		i;

	i = 0;
	while ((str[i] != '\0'))
	{
		s = str[i];
		if (!(((s >= 'a') && (s <= 'z')) || ((s >= 'A') && (s <= 'Z'))))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	res;

	res = ft_str_is_alpha("Hello");
	printf("%d", res);
	return (0);
}
*/
