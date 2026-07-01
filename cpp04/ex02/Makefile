NAME = brain
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp Polymorphism.cpp WrongAnimal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Polymorphism.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY:all re clean fclean
