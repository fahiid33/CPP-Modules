# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 00:14:58 by fstitou           #+#    #+#              #
#    Updated: 2022/12/18 00:29:13 by fstitou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o ScavTrap 

SRC =  main.cpp ClapTrap.cpp ScavTrap.cpp

NAME = ScavTrap

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all
	@rm -r *.dSYM