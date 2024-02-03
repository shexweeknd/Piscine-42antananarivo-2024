# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hramaros <hramaros@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 08:35:02 by rrabetok          #+#    #+#              #
#    Updated: 2024/01/28 13:38:14 by hramaros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC =  *.c */*.c

OBJ = *.o

FLAG = -Wall -Wextra -Werror

$(NAME) :
	@cc $(FLAG) $(SRC) -o $(NAME) -I./

clean :
	@rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean
