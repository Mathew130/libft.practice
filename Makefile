NAME	=	libft
CC	=	cc
CFLAGS	=	-Wall	-Werror	-Wextra
SRC	=	ft_bzero.c
OBJ	=	$(SRC:.c=.o)
all:	$(NAME)
	$(NAME):	$(OBJ)
		$(CC)	$(CFLAGS)	-o	$(NAME)	$(SRC)
