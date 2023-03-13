NAME := phonebook

CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := main.cpp \
	utils.cpp \
	Contact.cpp \
	PhoneBook.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM

fclean: clean

re: fclean all