/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:29:27 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/12 22:55:12 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const & src) 
        {
            *this = src;
        };
        ~MutantStack() {}

        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs) { }
            return *this;
        };

        typedef typename std::deque<T>::iterator iterator;

        iterator begin() {
            return this->c.begin();
        };

        iterator end() {
            return this->c.end();
        };
};

#endif