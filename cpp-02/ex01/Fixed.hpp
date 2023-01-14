/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:17:33 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 11:14:44 by fstitou          ###   ########.fr       */
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
	// ex01 constuctors;
    Fixed(const int num);
    Fixed(const float num);
	// ex01 member functions;
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &  operator<<( std::ostream & out, Fixed const & f );

#endif