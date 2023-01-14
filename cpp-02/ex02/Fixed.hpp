/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:34:51 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 11:45:20 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    int	_fixed;
	static const int fractional_bits = 8;
	public:
	Fixed();
	Fixed(Fixed const & cpy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed& operator= ( Fixed const & rhs);
	// **ex01 constuctors**;
    Fixed(const int num);
    Fixed(const float num);
	// **ex01 member functions**;
    float toFloat(void) const;
    int toInt(void) const;
	// **ex02 member functions**;
	// The 6 comparison operators:
	bool	operator ==	(const Fixed &) const;
	bool	operator !=	(const Fixed &) const;
	bool	operator <	(const Fixed &) const;
	bool	operator >	(const Fixed &) const;
	bool	operator >=	(const Fixed &) const;
	bool	operator <=	(const Fixed &) const;
	// The 4 arithmetic operators:
	Fixed	operator +	(const Fixed &) const;
	Fixed	operator -	(const Fixed &) const;
	Fixed	operator *	(const Fixed &) const;
	Fixed	operator /	(const Fixed &) const;
	// The 4 increment/decrement operators:
	Fixed&	operator ++	(void);
	Fixed&	operator --	(void);
	Fixed	operator ++	(int);
	Fixed	operator --	(int);
	// The 2 min/max functions:
	static Fixed&	min(Fixed &, Fixed &);
	static Fixed&	max(Fixed &, Fixed &);
	static Fixed const &	min(Fixed const &, Fixed const &);
	static Fixed const &	max(Fixed const &, Fixed const &);
};

std::ostream &  operator<<( std::ostream & out, Fixed const & f );


#endif