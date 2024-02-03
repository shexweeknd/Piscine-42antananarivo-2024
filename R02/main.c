/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 08:34:50 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 14:19:31 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ce fichier contient le programme principal*/
#include "utils.h"

int	main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		ft_put(argv[1]);
		return (0);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
