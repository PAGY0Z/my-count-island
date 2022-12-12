##
## EPITECH PROJECT, 2022
##
## File description:
##
##

BINARY_NAME	=	count_island

SRC	=	src/count_island.c

SRC_INCLUDE	=	src/include/main.o

CC = gcc

LDFLAGS = -Wall -Werror -Wextra -W

all:
	$(CC) -o $(BINARY_NAME) $(SRC) $(SRC_INCLUDE) $(LDFLAGS)

clean:
	rm -f $(BINARY_NAME)

fclean: clean

re: fclean all