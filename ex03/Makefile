
NAME= bps

SRCS= src/*.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = g++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME) : $(SRCS)
	@$(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re