# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 00:34:50 by aanghel           #+#    #+#              #
#    Updated: 2023/01/19 00:35:31 by aanghel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Fixed

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