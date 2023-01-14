/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:08 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/28 10:59:25 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	_brain = new Brain();
    _type = "Dog";
    std::cout<< "Dog default constructor called"<< std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    this->_type = src._type;
	_brain = new Brain(*src._brain);
    std::cout<< "Dog copy constructor called"<< std::endl;
}

Dog::~Dog()
{
	delete _brain;
    std::cout<< "Dog destructor called"<< std::endl;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	std::cout<< "Dog copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		_brain = new Brain(*rhs._brain);
		this->_type = rhs._type;
	}
	return *this;
}

std::string        Dog::getType()
{
    return _type;
}
std::string Dog::get_idea()
{
	return (_brain->ideas[2]);
}

void	Dog::makeSound() const
{
	std::cout<< "Woof"<< std::endl;
}