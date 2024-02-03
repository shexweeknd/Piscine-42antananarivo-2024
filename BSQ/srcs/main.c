/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 08:08:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 08:09:04 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_file.h"
#include "../includes/ft_utils.h"

int	main(int ac, char *av[])
{
	int	row;
	int	col;

	if (ac < 2)
	{
		ft_putstr("error\n");
		exit(EXIT_FAILURE);
	}
	row = ft_get_row(av[1]);
	col = ft_get_col(av[1]);
	ft_print(av[1], col, row);
	exit(EXIT_SUCCESS);
}
