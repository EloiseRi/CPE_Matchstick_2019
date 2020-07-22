##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	libmy

SRC		=	my_atoi.c		\
			my_putstr.c		\
			my_absolval.c	\
			my_adress.c	\
			my_diff_base.c	\
			my_pourcent.c	\
			my_print_s.c	\
			my_printf.c		\
			my_put_nbr.c	\
			my_putchar.c	\
			my_putnbr_base.c\
			my_putstr.c		\
			my_strlen.c		\
			my_strncmp.c	\

OBJ    =    $(SRC:.c=.o)

CFLAGS    = -I./../include

all:    $(NAME)

$(NAME):    $(OBJ)
	ar crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all