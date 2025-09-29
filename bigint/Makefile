NAME = bigint
CC = c++
CXX = c++
CXXFLAGS =-Wall -Wextra -std=c++98
SRCS = main.cpp bigint.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re