NAME 	= hordeofZombies
FLAGS 	= -Wall -Wextra -Werror
SRC		= 	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJ 	= $(SRC:%.cpp=%.o)

INC 	= Zombie.hpp

all 	: $(NAME) $(INC)
$(NAME) : $(OBJ)
		c++ -std=c++98 $(FLAGS) $(OBJ) -o $(NAME)
clean 	:
		@rm -f $(OBJ)
fclean 	: clean
		@rm -f $(NAME)

re		: fclean all