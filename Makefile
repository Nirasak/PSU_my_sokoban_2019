##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/my_strcmp.c	\
		src/my_sokoban.c	\
		src/open_file.c	\
		src/count_char.c	\
		src/add_slashn.c	\
		src/str_to_tab.c	\
		src/check_error.c	\
		src/print_map.c	\
		src/move.c	\
		src/search_player.c	\
		src/cpy_tab.c	\
		src/check_win.c	\

TESTS	=	tests/test_my_sokoban.c	\
		src/my_strcmp.c	\
		src/my_sokoban.c	\
		src/open_file.c	\
		src/count_char.c	\
		src/add_slashn.c	\
		src/str_to_tab.c	\
		src/check_error.c	\
		src/print_map.c	\
		src/move.c	\
		src/search_player.c	\
		src/cpy_tab.c	\
		src/check_win.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-W -Wall -g3

CPPFLAGS	=	-I include/

LDFLAGS	=	-lncurses

UNITFLAGS	=	-lcriterion --coverage

EXECTESTS	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) -L ./ -lmy

tests_run:
	$(CC) -o $(EXECTESTS) $(TESTS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(UNITFLAGS) $(LIB)
	./$(EXECTESTS) && gcovr --branches --exclude tests/

clean:
	rm -f $(OBJ)
	make clean -C lib/
	rm -f *.gc*

fclean:	clean
	make fclean -C lib/
	rm -f $(NAME)
	rm -f $(EXECTESTS)

re:	fclean all

.PHONY:	all clean fclean re
