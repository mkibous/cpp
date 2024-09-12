NAME = Account
SRC = Account.cpp tests.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp Account.hpp
	c++ $(FLAGS) -c $<
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean