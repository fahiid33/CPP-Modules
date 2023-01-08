/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 02:17:51 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/08 02:25:46 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

template < typename  T>
T  max (T a, T b)
{
    return  (a > b ? a : b);
}

template < typename  T>
T  min (T a, T b)
{
    return  (a < b ? a : b);
}

template < typename  T>
void    swap (T & a, T & b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}