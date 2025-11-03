NAME = brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -MD -MP -std=c++98
RM = rm -rf
SRCS =  main.cpp
OBJS = $(SRCS:%.cpp=%.o)

DEPS = $(SRCS:%.cpp=%.d)

all : $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) Makefile
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re