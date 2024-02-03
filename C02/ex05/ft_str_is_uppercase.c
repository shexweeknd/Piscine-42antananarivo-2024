/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:16:28 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/16 16:16:51 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	ret;

	ret = ft_str_is_uppercase("HELLO");
	printf("%d", ret);
	return (0);
}
*/
