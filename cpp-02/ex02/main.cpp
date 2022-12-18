/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:39:17 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/17 23:55:22 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    // the 4 arithmetic operators
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a / 0 = " << a / 0 << std::endl;
    // the 4 comparison operators
    std::cout << "a > b = " << (a > b) << std::endl;
    std::cout << "a < b = " << (a < b) << std::endl;
    std::cout << "a >= b = " << (a >= b) << std::endl;
    std::cout << "a <= b = " << (a <= b) << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;
    return 0;
} 