NAME	:= materia
SRCS	:= main.cpp
OBJS	:= $(SRCS:.cpp=.o)
CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror
RM		:= rm -f

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)