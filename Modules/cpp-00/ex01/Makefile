# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:30:45 by fstitou           #+#    #+#              #
#    Updated: 2022/11/16 02:20:03 by fstitou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o phonebook

SRC =  phone_book.cpp

NAME = phonebook

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all
	@rm -r *.dSYM