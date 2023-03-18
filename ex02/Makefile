NAME := Account

CC := c++

CFLAGS := -Wall -Werror -Wextra -std=c++98 -g

INCS := -iquote ./

SRCS := tests.cpp \
	Account.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)  -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCS) -c $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM ${OBJS}

fclean: clean

re: fclean all

.PHONY: clean fclean re all
