/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:18:47 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 11:37:15 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed  b( 10 );
    Fixed  c( 42.42f );
    Fixed  d( b );

    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    // to Int
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    // To Float
    std::cout << "|a| is " << a.toFloat() << " as float" << std::endl;
    std::cout << "|b| is " << b.toFloat() << " as float" << std::endl;
    std::cout << "|c| is " << c.toFloat() << " as float" << std::endl;
    std::cout << "|d| is " << d.toFloat() << " as float" << std::endl;
    return 0;
}