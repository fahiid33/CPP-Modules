/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:47:47 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/11 23:27:31 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template <typename T>
void    easyfind(T type, int to_find)
{
    typename T::iterator it = std::find(type.begin(), type.end(), to_find);
    if (it == type.end())
        throw std::exception();
    std::cout << "Found " << to_find << " at index " << std::distance(type.begin(), it) << std::endl;
}

#endif