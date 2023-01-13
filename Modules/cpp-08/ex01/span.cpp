/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:42:03 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/12 00:48:37 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _n(0) 
{
    // std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _n(n) 
{
    // std::cout << "Constructor called" << std::endl;
}

Span::Span(Span const & src) 
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Span::~Span() 
{
    // std::cout << "Destructor called" << std::endl;
}

Span & Span::operator=(Span const & rhs) 
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_v = rhs._v;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (this->_v.size() < this->_n)
        this->_v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (this->_v.size() < 2)
        throw std::exception();
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 1; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->_v.size() < 2)
        throw std::exception();
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    return v[v.size() - 1] - v[0];
}