# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 17:40:11 by jpancorb          #+#    #+#              #
#    Updated: 2025/05/05 18:27:46 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= repetitive_work
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
DEPS	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -MMD -MP 

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEP)
		c++ $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
		rm -f $(OBJS) $(OBJS:.o=.d)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re