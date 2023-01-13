/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:08 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 00:46:16 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    _type = "Dog";
    std::cout<< "Dog default constructor called"<< std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    this->_type = src._type;
    std::cout<< "Dog copy constructor called"<< std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog destructor called"<< std::endl;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	std::cout<< "Dog copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string        Dog::getType()
{
    return _type;
}

void	Dog::makeSound() const
{
	std::cout<< "Woof"<< std::endl;
}