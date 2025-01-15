NAME = libft.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@