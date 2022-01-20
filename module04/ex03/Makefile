NAME		= animal

SRC			= main.cpp ICharacter.cpp Ice.cpp AMateria.cpp Character.cpp IMateriaSource.cpp Cure.cpp MateriaSource.cpp
HEADER		= ICharacter.hpp Ice.hpp AMateria.hpp Character.hpp IMateriaSource.hpp Cure.hpp MateriaSource.hpp

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