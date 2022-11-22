##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for project named: workshop
##

SRC				=		error.c				\
						event_handling.c	\
						main.c 				\
						sprite.c			\
						text.c				\
						window.c			\
						workshop.c

DIR_SRC 		= 		$(addprefix src/, $(SRC))

OBJ				=		$(DIR_SRC:.c=.o)

CC				=		gcc

CFLAGS			=		-Wall -Wextra -ggdb3

CPPFLAGS		=		-I./include/

LDFLAGS			=		-lcsfml-window -lcsfml-graphics

NAME			=		workshop

RM				=		rm -rf

all: 	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ) vgcore* *.gc*

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re