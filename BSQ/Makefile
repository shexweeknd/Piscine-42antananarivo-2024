# Makefile for C project

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS =

# Directories
SRC_DIR = srcs
INC_DIR = includes

# Files
NAME = bsq
SRCS = $(wildcard $(SRC_DIR)/*.c)
H_FILES = $(wildcard $(INC_DIR)/*.h)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(SRC_DIR)/%.o,$(SRCS))

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(H_FILES)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f ${NAME}

.PHONY: all clean