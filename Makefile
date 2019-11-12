NAME = libft.a

CC = gcc

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_tolower.c ft_toupper.c ft_substr.c

OBJS = ${SRCS:.c=.o}

SRCS_BONUS = ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $^

$(NAME): ${OBJS}
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

bonus: all $(OBJS_BONUS)
	@$(CC) -c $(CFLAGS) $(SRCS_BONUS)
	@ar rcs $(NAME) $(OBJS_BONUS)

debug: CFLAGS += -g3
debug: all bonus

sanitize: CFLAGS += -fsanitize=address -g3
sanitize: all bonus

.PHONY: debug re fclean all bonus
