NAME		= karen

SRC			= main.cpp Karen.cpp
HEADER		= Karen.hpp

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

test:			$(NAME)
				./replace tests/1 "amogus" "abobus"
				./replace tests/2 "UPPERCASE" "lowercase"

.PHONY: all clean fclean re 