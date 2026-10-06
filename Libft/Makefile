NAME = libft.a
CFLAGS = -Wall -Werror

OBJS = ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_memchr.o ft_memmove.o \
       ft_toupper.o ft_calloc.o ft_bzero.o ft_strdup.o

SRC = (.o::.c)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc -c $(CFLAGS) $< -o $@

# ft_strlen.o: ft_strlen.c
# 	cc -Wall -Wextra -Werror -c ft_strlen.c

# ft_strlcpy.o: ft_strlcpy.c
# 	cc -Wall -Wextra -Werror -c ft_strlcpy.c

# ft_strlcat.o: ft_strlcat.c
# 	cc -Wall -Wextra -Werror -c ft_strlcat.c

# ft_memchr.o: ft_memchr.c
# 	cc -Wall -Wextra -Werror -c ft_memchr.c

# ft_memmove.o: ft_memmove.c
# 	cc -Wall -Wextra -Werror -c ft_memmove.c

# ft_toupper.o: ft_toupper.c
# 	cc -Wall -Wextra -Werror -c ft_toupper.c

# ft_calloc.o: ft_calloc.c
# 	cc -Wall -Wextra -Werror -c ft_calloc.c

# ft_bzero.o: ft_bzero.c
# 	cc -Wall -Wextra -Werror -c ft_bzero.c

# ft_strdup.o: ft_strdup.c
# 	cc -Wall -Wextra -Werror -c ft_strdup.c

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re