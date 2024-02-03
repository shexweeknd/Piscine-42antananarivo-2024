/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:41:22 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/16 19:56:33 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32) && (str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	ret;

	ret = ft_str_is_printable("");
	printf("%d", ret);
	return (0);
}
*/
