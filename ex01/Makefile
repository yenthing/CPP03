NAME = a.out
RM	=		rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -g
SOURCES = 	main.cpp	\
			ClapTrap.cpp \
			ScavTrap.cpp 

CXX = c++
OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re