NAME := megaphone

CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all