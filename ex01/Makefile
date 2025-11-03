NAME = zombiehorde
CC = c++
CFLAGS = -Wall -Wextra -Werror -MD -MP -std=c++98
RM = rm -rf
SRCS =  main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:%.cpp=%.o)

DEPS = $(SRCS:%.cpp=%.d)

all : $(NAME)

%.o: %.cpp $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER) Makefile
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re