/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:14 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 00:45:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//---------------------------------------------------------------------------------------------------//
                            // WrongAnimal functions
//---------------------------------------------------------------------------------------------------//

WrongAnimal::WrongAnimal( void )
{
	_type = "WrongAnimal";
	std::cout<< "WrongAnimal default constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	this->_type = src._type;
	std::cout<< "WrongAnimal copy constructor called"<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal destructor called"<< std::endl;
}

WrongAnimal	& WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout<< "WrongAnimal copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string        WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout<< "WrongAnimal sound"<< std::endl;
}

//---------------------------------------------------------------------------------------------------//
							// WrongCat functions
//---------------------------------------------------------------------------------------------------//

WrongCat::WrongCat( void )
{
	_type = "WrongCat";
	std::cout<< "WrongCat default constructor called"<< std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	this->_type = src._type;
	std::cout<< "WrongCat copy constructor called"<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<< "WrongCat destructor called"<< std::endl;
}

WrongCat	& WrongCat::operator=(WrongCat const & rhs)
{
	std::cout<< "WrongCat copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string        WrongCat::getType() const
{
	return _type;
}

void	WrongCat::makeSound() const
{
	std::cout<< "WrongCat sound"<< std::endl;
}

//---------------------------------------------------------------------------------------------------//
							// WrongDog functions
//---------------------------------------------------------------------------------------------------//

WrongDog::WrongDog( void )
{
	_type = "WrongDog";
	std::cout<< "WrongDog default constructor called"<< std::endl;
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal(src)
{
	this->_type = src._type;
	std::cout<< "WrongDog copy constructor called"<< std::endl;
}

WrongDog::~WrongDog()
{
	std::cout<< "WrongDog destructor called"<< std::endl;
}

WrongDog	& WrongDog::operator=(WrongDog const & rhs)
{
	std::cout<< "WrongDog copy assignment called"<< std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string        WrongDog::getType() const
{
	return _type;
}

void	WrongDog::makeSound() const
{
	std::cout<< "WrongDog sound"<< std::endl;
}
