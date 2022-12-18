/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:05 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 23:30:41 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    std::cout<< "Cat default constructor called"<< std::endl;
}

Cat::Cat(Cat const & src)
{
    std::cout<< "Cat copy constructor called"<< std::endl;
	*this = src;
}

Cat::~Cat()
{
    std::cout<< "Cat destructor called"<< std::endl;
}

Cat	& Cat::operator=(Cat const & rhs)
{
	std::cout<< "Cat copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<< "Meeoow"<< std::endl;
}