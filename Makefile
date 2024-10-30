NAME = libftprintf.a
SRCS = ft_printf.c \
		ft_putprint.c \
		ft_putprint_advanced.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) -rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re