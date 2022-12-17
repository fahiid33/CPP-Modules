/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:15:29 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/17 01:40:45 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int	fixed;
	static const int fractional_bits = 8;
	public:
	Fixed();
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed& operator= ()
};

#endif