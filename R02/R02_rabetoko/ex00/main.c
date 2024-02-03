/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:37:22 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 21:25:53 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*formatted_input;

	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		formatted_input = ft_min_atoi(argv[1]);
		ft_manage("numbers.dict", formatted_input);
		free(formatted_input);
	}
	else if (argc == 3)
	{
		if (!(ft_error(argc, argv[2])))
			return (0);
		formatted_input = ft_min_atoi(argv[2]);
		ft_manage(argv[1], formatted_input);
		free(formatted_input);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
}
