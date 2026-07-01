NAME = megaphone
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98 -I include

SRC = megaphone.cpp

OBJ =$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY:all clean fclean re
