SRCS= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJDIR= ./obj/

OBJS= ${SRCS:%.c=${OBJDIR}%.o}

CFLAGS= -Wall -Werror -Wextra -I./
NAME := libft.a

all: $(NAME)

${OBJDIR}%.o: %.c
	@mkdir -p ${OBJDIR}
	@printf "Compiling %s                                                          \r" $<
	@gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	@printf "\n"
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

re: fclean all

clean:
	@echo Cleaning out those old .o
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

so:
	gcc -nostartfiles -fPIC $(CFLAGS) -c $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean fclean re all
