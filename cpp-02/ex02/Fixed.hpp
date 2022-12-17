/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:34:51 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/17 03:39:11 by fstitou          ###   ########.fr       */
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
    Fixed(const int num);
    Fixed(const float num);
    float toFloat(void) const;
    int toInt(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed& operator= ( Fixed const & rhs);
};

std::ostream &  operator<<( std::ostream & out, Fixed const & f );


#endif