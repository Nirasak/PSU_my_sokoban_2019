##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

LIB	=	my/my_printf.c	\
		my/my_printchar.c	\
		my/my_putchar.c	\
		my/my_putnbr.c	\
		my/my_putstr.c	\
		my/my_printstr.c	\
		my/my_octal.c	\
		my/my_put_hexa_min.c	\
		my/my_put_hexa_maj.c	\
		my/my_put_unsigned_int.c	\
		my/my_print_pointer.c	\
		my/my_len_puted.c	\
		my/my_put_invisible_char.c	\
		my/my_pourcent.c	\
		my/my_binary.c	\
		my/my_strlen.c	\
		my/my_hub_l.c	\
		my/my_put_long.c	\
		my/my_octal_long.c	\
		my/my_put_unsigned_long.c	\
		my/my_put_hexa_min_l.c	\
		my/my_put_hexa_maj_l.c	\
		my/my_hub_ll.c	\
		my/my_octal_ll.c	\
		my/my_put_hexa_maj_ll.c	\
		my/my_put_hexa_min_ll.c	\
		my/my_put_unsigned_ll.c	\
		my/my_put_ll.c	\
		my/my_hub_h.c	\
		my/my_put_h.c	\
		my/my_put_unsigned_h.c	\
		my/my_octal_h.c	\
		my/my_put_hexa_maj_h.c	\
		my/my_put_hexa_min_h.c	\
		my/my_hub_hh.c	\
		my/my_put_hh.c	\
		my/my_put_unsigned_hh.c	\
		my/my_put_hexa_min_hh.c	\
		my/my_put_hexa_maj_hh.c	\
		my/my_octal_hh.c	\
		my/my_hub_modf.c	\
		my/my_putnbr_m.c	\
		my/my_getnbr.c	\
		my/my_printchar_m.c	\
		my/my_printstr_m.c	\
		my/my_putnbr_unsigned_m.c	\
		my/my_put_hexa_min_m.c	\
		my/my_put_hexa_maj_m.c	\
		my/my_octal_m.c	\
		my/my_print_pointer_m.c	\
		my/my_put_invisible_char_m.c	\
		my/my_binary_m.c	\

TESTS	=	tests/test_my_printf.c	\
		tests/test_flag_d.c	\
		tests/test_flag_s.c	\
		tests/test_flag_c.c	\
		tests/test_flag_o.c	\
		tests/test_flag_u.c	\
		tests/test_flag_smaj.c	\
		tests/test_flag_x.c	\
		tests/test_flag_xmaj.c	\
		tests/test_flag_p.c	\
		tests/test_flag_b.c	\
		tests/test_my_getnbr.c	\

OBJ	=	$(LIB:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-W -Wall -I include/

UNITFLAGS	=	-lcriterion --coverage

EXECTESTS	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

tests_run:
	$(CC) -o $(EXECTESTS) $(TESTS) $(CFLAGS) $(UNITFLAGS) $(LIB)
	./$(EXECTESTS) && gcovr --branches --exclude tests/

clean:
	rm -f $(OBJ)
	rm -f *gc*

fclean: clean
	rm -f ../$(NAME)
	rm -f $(EXECTESTS)

re:	fclean all

.PHONY: all clean fclean re
