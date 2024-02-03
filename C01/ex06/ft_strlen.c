/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 03:51:28 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/14 04:32:34 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/
int	ft_strlen(char *str)
{
	int	nbr;

	nbr = 0;
	while (str[nbr] != '\0')
	{
		nbr++;
	}
	return (nbr);
}
/*
int	main(void)
{
	ft_strlen("bonjour");
	return (0);
}
*/
