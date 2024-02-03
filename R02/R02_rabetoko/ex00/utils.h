/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:34:54 by rrabetok          #+#    #+#             */
/*   Updated: 2024/01/28 21:12:35 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_puterror(char *err);
int		ft_strlen(char *str);

char	*ft_min_atoi(char *str);
int		ft_is_space(char c);
int		ft_module(char *str);
int		ft_error(int argc, char *str);

char	**ft_allocate(char *arg);
char	**ft_fill_array(char *arg, char **arr, int arg_len, int first_slot);
char	*ft_strstr(char **str_array, int array_l, char *to_find);
int		ft_read_words(char *str);

void	ft_first_digit(char **array, char digit, int counter_rows);
void	ft_second_digit(char **array, char *digits, int counter_rows);
void	ft_third_digit(char **array, char digit, int counter_rows);
void	ft_ord(char **array, int counter_rows, int max, int i);

char	*ft_read_dict(char *dict);
int		ft_counter_rows(char *buf);
char	**ft_alloc_array(char *buf);
char	**ft_copy_dict_array(char *dict);

char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

int		ft_manage(char *dict, char *str);
void	ft_manage_dict(char *digits, char **dict, int counter_rows);

#endif
