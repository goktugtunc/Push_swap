programname = push_swap
sources = libft.c libft2.c errorcontrol.c extrafunction1.c \
			push_swap_main.c pushfunctions.c swapfunctions.c \
			algorithm.c downandupfunctions.c reverserotatefunctions.c \
			rotatefunctions.c
objs = libft.o libft2.o errorcontrol.o extrafunction1.o \
			push_swap_main.o pushfunctions.o swapfunctions.o \
			algorithm.o downandupfunctions.o reverserotatefunctions.o \
			rotatefunctions.o

all: $(programname)

$(programname):
	gcc -Wall -Werror -Wextra $(sources) -o $(programname)

clean:
	rm -rf $(objs)

fclean: clean
	rm -rf $(programname)

re: fclean all
