NAME = exec
SRC = main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
HEADERS = Bureaucrat.hpp ShrubberyCreationForm.hpp AForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $<

clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: clean