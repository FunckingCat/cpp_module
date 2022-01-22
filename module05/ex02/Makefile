NAME		= bureaucraft

SRC			=	Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp
HEADER		=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
				RobotomyRequestFor.hpp PresidentialPardonForm.hpp

CC = g++
FLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.cpp=.o)
RM = rm -f

all: $(NAME)

%.o : %.cpp $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 