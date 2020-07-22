##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME    =    matchstick

SRC    =    src/main.c    		\
			src/map_gestion.c	\
			src/matchstick.c    \
			src/check_error.c	\


OBJ    =    $(SRC:.c=.o)

CFLAGS    +=    -Wall -Wextra -I./include -g3

all:    $(NAME)

$(NAME):    $(OBJ)
	make -C lib/ re
	gcc -o $(NAME) $(OBJ) lib/libmy

clean:
	rm -f $(OBJ)

fclean: clean
	make -C lib/ fclean
	rm -f $(NAME)

re: fclean all