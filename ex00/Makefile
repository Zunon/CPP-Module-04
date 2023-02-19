NAME	:= cats_and_dogs
WRNG	:= wrong_cats_and_dogs
SRCS	:= main.cpp Animal.cpp Dog.cpp Cat.cpp
WRNGSRC	:= wrong_main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
WRNGOBJ	:= $(WRNGSRC:.cpp=.o)
OBJS	:= $(SRCS:.cpp=.o)
CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror
RM		:= rm -f

.PHONY: all clean fclean re run wrong run_wrong

all: $(NAME) $(WRNG)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(WRNGOBJ)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(WRNG)

re: fclean all

run: $(NAME)
	./$(NAME)

$(WRNG): $(WRNGOBJ)
	$(CC) $(CFLAGS) -o $(WRNG) $(WRNGOBJ)

wrong: $(WRNG)

run_wrong:	$(WRNG)
	./$(WRNG)