/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 02:52:20 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/08 03:35:52 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const &src);
        ~Array(void);
        Array &operator=(Array const &rhs); 
        unsigned int size(void) const;
        T &operator[](int i);
};











#endif