CC	=	gcc

SRC	=	main.c			\
		include/libmy.c		\
		include/libmy2.c	\
		include/my_printf.c	\
		include/function1.c	\
		include/function2.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Werror -Wextra -Wall

CFLAG 	=	-fPIC -shared

RM	=	rm -f

STATIC	=	libmy_printf_`uname -m`-`uname -s`.a

DYNAMIC	=	libmy_printf_`uname -m`-`uname -s`.so

make:			all

my_printf_static:	$(OBJ)
			ar r $(STATIC) $(OBJ)

my_printf_dynamic:	$(OBJ)
			$(CC) $(CFLAGS) $(CFLAG) -o $(DYNAMIC) $(SRC)

all:			my_printf_static my_printf_dynamic

clean:
			$(RM) $(OBJ) ./*~

fclean: 		clean
			$(RM) $(STATIC) $(DYNAMIC) a.out

re:			fclean all

.PHONY:			all make my_printf_static my_printf_dynamic clean fclean re