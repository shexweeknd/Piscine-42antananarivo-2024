/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:47:02 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/15 08:55:43 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	int	ret;

	str = "el1";
	ret = ft_str_is_lowercase(str);
	printf("%d", ret);
	return (0);
}
*/
