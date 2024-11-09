NAME = fixed
SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	c++ $(FLAGS) -c $<

clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean