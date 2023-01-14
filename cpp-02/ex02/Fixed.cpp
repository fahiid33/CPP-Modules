/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:35:08 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 11:45:37 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    // std::cout << "default constructor called" << std::endl;
    _fixed = 0;
}

Fixed::Fixed(Fixed const & cpy)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed( void )
{
    // std::cout << "destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return _fixed;
}

void	Fixed::setRawBits(int raw)
{
	_fixed = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
    // std::cout<< "copy assignment operator called"<< std::endl;
    if (this != &rhs)
    {
        this->_fixed = rhs.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << std::endl;
    _fixed = (num << fractional_bits);
}
Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << std::endl;
    _fixed = roundf(num * (1 << fractional_bits));
}

float Fixed::toFloat(void) const
{
    return ((float)_fixed / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return (_fixed >> fractional_bits);
}

std::ostream &  operator<<( std::ostream & out, Fixed const & f ) 
{
    out << f.toFloat();
    return out;
}

bool	Fixed::operator ==	(const Fixed & rhs) const
{
    return (this->_fixed == rhs.getRawBits());
}

bool	Fixed::operator !=	(const Fixed & rhs) const
{
    return (this->_fixed != rhs.getRawBits());
}

bool    Fixed::operator <	(const Fixed & rhs) const
{
    return (this->_fixed < rhs.getRawBits());
}

bool    Fixed::operator >	(const Fixed & rhs) const
{
    return (this->_fixed > rhs.getRawBits());
}

bool    Fixed::operator <=	(const Fixed & rhs) const
{
    return (this->_fixed <= rhs.getRawBits());
}

bool    Fixed::operator >=	(const Fixed & rhs) const
{
    return (this->_fixed >= rhs.getRawBits());
}

Fixed	Fixed::operator +	(const Fixed & rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator -	(const Fixed & rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator *	(const Fixed & rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator /	(const Fixed & rhs) const
{
    if (rhs.toInt() != 0)
        return (Fixed(this->toFloat() / rhs.toFloat()));
    else
    {
        std::cout << "Error: division by zero" << std::endl;
        return (Fixed(0));
    }
}

Fixed &	Fixed::operator ++	(void)
{
    this->_fixed++;
    return (*this);
}

Fixed	Fixed::operator ++	(int)
{
    Fixed tmp(*this);
    _fixed++;
    return (tmp);
}

Fixed &	Fixed::operator --	(void)
{
    this->_fixed--;
    return (*this);
}

Fixed	Fixed::operator --	(int)
{
    Fixed tmp(*this);
    _fixed--;
    return (tmp);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &	Fixed::min(const Fixed & a, const Fixed & b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &	Fixed::max(const Fixed & a, const Fixed & b)
{
    if (a > b)
        return (a);
    return (b);
}