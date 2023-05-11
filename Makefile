CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror -g

NAME	=	regex

SRCS	=	src/main.c \
			src/ft_regex.c

OBJS	=	$(SRCS:.c=.o)

%.o:	%.c
	@$(CC) $(CFLAGS) -c $^ -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	@make -s -C libft
	@$(CC) $^ -lpthread -o $@ libft/libft.a
	@echo finish

clean:
	@make clean -s -C libft
	@rm -rf $(OBJS)

fclean:	clean
	@make fclean -s -C libft
	@rm -rf $(NAME)

re:		fclean all

.PHONY:	re all clean fclean
