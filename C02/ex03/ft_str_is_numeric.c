/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:30:12 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/15 08:40:21 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] <= '9') && (str[i] >= '0')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	int	res;

	str = "123a";
	res = ft_str_is_numeric(str);
	printf("%d", res);
	return (0);
}
*/
