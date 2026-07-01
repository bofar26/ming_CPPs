NAME = phonebook
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98 -I include

SRC = main.cpp \
	utils/phonebook_utils.cpp \
	utils/contact_utils.cpp

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



