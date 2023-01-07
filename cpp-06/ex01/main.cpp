/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:36:29 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/07 23:52:08 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data d;

    uintptr_t p;

    d.i = 5;
    
    std::cout << "SERIALIIIIZE : " << std::endl;
    std::cout << d.i << std::endl;
    
    p = serialize(&d);
    
    
    std::cout << "DESERIALIIIZE : " << std::endl;
    Data *za;

    za = deserialize(p);

    std::cout << za->i << std::endl;
}