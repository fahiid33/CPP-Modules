/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:05 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 01:59:03 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	_brain = new Brain();
    _type = "Cat";
    std::cout<< "Cat default constructor called"<< std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
    this->_type = src._type;
	_brain = new Brain(*src._brain);
    std::cout<< "Cat copy constructor called"<< std::endl;
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
		_brain = new Brain(*rhs._brain);
		this->_type = rhs._type;
	}
	return *this;
}

std::string        Cat::getType()
{
    return _type;
}

void	Cat::makeSound() const
{
	delete _brain;
	std::cout<< "Meeoow"<< std::endl;
}