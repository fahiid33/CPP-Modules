/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:01:08 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 23:13:05 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Animal Default constructor called"<< std::endl;
}

// Animal::Animal(std::string animal)
// {
		
// }

Animal::Animal(Animal const & src)
{
    std::cout<< "Animal copy constructor called"<< std::endl;
    *this = src;
}

Animal  & Animal::operator=(Animal const & rhs)
{
    std::cout<< "Animal copy assignment called"<< std::endl;
    if (this != &rhs)
    {
		this->_type = rhs._type;
    }
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called"<< std::endl;
}

std::string		Animal::getType( void )
{
	return _type;
}

void	Animal::setType(std::string type)
{
	_type = type;
}
