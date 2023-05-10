CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror -g

NAME	=	regex

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

%.o:	%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $^ -lpthread -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:		fclean all

.PHONY:	re all clean fclean
