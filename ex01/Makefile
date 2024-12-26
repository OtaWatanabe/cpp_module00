CFLAGS = -std=c++98 -Wall -Wextra -Werror
CC = c++
SRCS = main.cpp Contact.cpp PhoneBook.cpp
NAME = phonebook
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re