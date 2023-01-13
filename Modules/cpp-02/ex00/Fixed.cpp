/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:15:36 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 10:03:59 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "default constructor called" << std::endl;
    fixed = 0;
}

Fixed::Fixed(Fixed const & cpy)
{
    std::cout << "copy constructor called" << std::endl;
    fixed = 0;
    *this = cpy;
}

Fixed::~Fixed( void )
{
    std::cout << "destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}

void	Fixed::setRawBits(int raw)
{
	fixed = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
    std::cout<< "copy assignment operator called"<< std::endl;
    if (this != &rhs)
    {
        this->fixed = rhs.getRawBits();
    }
    return *this;
}