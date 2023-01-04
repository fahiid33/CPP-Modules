# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 10:14:01 by fstitou           #+#    #+#              #
#    Updated: 2023/01/04 17:05:32 by fstitou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

SRC =  main.cpp Form.cpp Bureaucrat.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

NAME = Bureaucrat

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean	
	rm -rf $(NAME) 

re : fclean all