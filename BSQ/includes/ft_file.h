/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:07:11 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/01 06:15:36 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include "../includes/ft_utils.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_get_row(char *path);

int			ft_get_col(char *path);

t_buffer	ft_get_buffer(char *path, int length);

#endif