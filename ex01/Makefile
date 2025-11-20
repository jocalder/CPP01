NAME	=	MoarBrainz

C++		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	Zombie.cpp		\
			main.cpp		\
			zombieHorde.cpp	\

OBJS	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
		