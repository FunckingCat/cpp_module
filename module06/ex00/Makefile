NAME		= converter

SRC			=	main.cpp Converter.cpp
HEADER		=	Converter.hpp

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

test: all
	./converter				; echo " ";
	./converter	converter	; echo " ";
	./converter	0			; echo " ";
	./converter	nan			; echo " ";
	./converter	nanf		; echo " ";
	./converter	"*"			; echo " ";
	./converter	42			; echo " ";
	./converter	42.0		; echo " ";
	./converter	42.0f		; echo " ";
	./converter	42.51		; echo " ";
	./converter	42.51f		; echo " ";
	./converter	51.989898	; echo " ";
	./converter	-51.989898f	; echo " ";
	./converter	14.21e10	; echo " ";
	./converter	42.21e10f	; echo " ";
	./converter	42.21e10f	; echo " ";
	./converter	2147483647	; echo " ";
	./converter	2147483648	; echo " ";
	./converter	-2147483648	; echo " ";

re: fclean all

.PHONY: all clean fclean re test