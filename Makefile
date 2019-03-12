##
## EPITECH PROJECT, 2018
## makefile
## File description:
## make
##

CC		=		gcc

NAME		=		libmy.a

SRC		=		my_printf.c \
					functions.c \
					function_display.c \
					functions2_display.c \

RM		=		rm

CFLAGS		=		-Werror -Wall -Wextra

OBJ		=		$(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
			ar rc libmy.a $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all
