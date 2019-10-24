NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c \
ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \


OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

.c.o:
	gcc ${FLAGS} -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS}
	gcc -o $(NAME) $(OBJS)
	ar rcs $(NAME) *.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
