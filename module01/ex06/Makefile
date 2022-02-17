NAME		= karenFilter

SRC			= main.cpp Karen.cpp
HEADER		= Karen.hpp

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

test:			$(NAME)
				./karenFilter DEBUG
				./karenFilter INFO
				./karenFilter WARNING
				./karenFilter ERROR
				./karenFilter FOO

.PHONY: all clean fclean re 