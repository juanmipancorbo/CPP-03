# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 17:40:11 by jpancorb          #+#    #+#              #
#    Updated: 2025/04/25 17:40:13 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= aaaaand...open
SRCS	= main.cpp ClapTrap.cpp
DEP		= ClapTrap.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEP)
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re