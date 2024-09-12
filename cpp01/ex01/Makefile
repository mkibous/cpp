NAME = zombie
SRC = main.cpp Zombie.cpp zombieHorde.cpp
FLAGS = 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp Zombie.hpp
	c++ $(FLAGS) -c $<
clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean