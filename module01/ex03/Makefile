NAME		= attack

SRC			= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADER		= Weapon.hpp HumanA.hpp HumanB.hpp

CC= clang++ -std=c++98
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