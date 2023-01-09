/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 02:52:26 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/08 18:45:02 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0)
{
    // std::cout << "Construction with no parameter called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    // std::cout << "Construction with an unsigned int parameter called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    // std::cout << "Copy assignment called" << std::endl;
    if (this != &rhs)
    {
        _size = rhs._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](int i)
{
    if (i >= 0 && i < (int)_size)
        return (_array[i]);
    throw std::out_of_range("index is out of bounds");
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (_size);
}