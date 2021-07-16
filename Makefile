##
## EPITECH PROJECT, 2021
## B-PSU-200-PAR-2-1-mysokoban-axel.zenine
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/find.c	\
		src/move_box.c	\
		src/move_p.c	\
		src/utility.c	\
		src/replace.c	\
		src/start.c	\
		src/start2.c

OBJ	=	$(SRC)

NAME	=	my_sokoban

all:		$(NAME)

$(NAME):
		make -C lib/my
		gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy -lncurses

valgrind:
		make -C lib/my
		gcc -o $(NAME) $(SRC) -I./include -L./lib -lmy -g3

clean:
		make -C lib/my clean

fclean:
		make -C lib/my fclean
		rm $(NAME)

re:		fclean all