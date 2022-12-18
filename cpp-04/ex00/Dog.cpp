/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:08 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 23:30:28 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    std::cout<< "Dog default constructor called"<< std::endl;
}

Dog::Dog(Dog const & src)
{
    std::cout<< "Dog copy constructor called"<< std::endl;
    *this = src;
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

void	Dog::makeSound() const
{
	std::cout<< "Woof"<< std::endl;
}