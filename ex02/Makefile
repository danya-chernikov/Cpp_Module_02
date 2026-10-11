CXX=c++

NAME=fixed_point

CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -O0 -g3

all: $(NAME)

$(NAME): main.o Fixed.o
	$(CXX) $(CXXFLAGS) main.o Fixed.o -o $(NAME)

main.o: main.cpp Fixed.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Fixed.o: Fixed.cpp Fixed.h
	$(CXX) $(CXXFLAGS) -c Fixed.cpp

clean:
	rm -f main.o Fixed.o

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
