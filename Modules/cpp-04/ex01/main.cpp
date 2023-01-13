/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:11 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/28 11:08:05 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <stdlib.h>
int main()
{
    
    Animal* j = new Dog();
    Animal* i = new Cat();
    Animal *a = new Dog();
    Animal *animal[4];

    for (size_t i = 0; i < 4; i++)
    {
	    if (i % 2 == 0)
		    animal[i] = new Dog();
	    else
		    animal[i] = new Cat();
    }
    delete j; 
    delete i;
    for (size_t i = 0; i < 4; i++)
    {
	    delete(animal[i]);
    }
    // system("leaks Brain");
}
