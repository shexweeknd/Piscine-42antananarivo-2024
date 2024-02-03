NAME = rush-02

SRC =  *.c */*.c

OBJ = *.o

FLAG = -Wall -Wextra -Werror

$(NAME) :
	@cc $(FLAG) $(SRC) -o $(NAME)

debug :
	@cc $(FLAG) $(SRC) -o $(NAME) -g

clean :
	@rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean
