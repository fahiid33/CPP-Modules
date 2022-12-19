/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:11 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 02:34:16 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();
 
    Animal *animal[4];
    for (size_t i = 0; i < 4; i++)
    {
	    if (i % 2 == 0)
		    animal[i] = new Dog();
	    else
		    animal[i] = new Cat();
    }
 
    delete j;//should not create a leak
    delete i;
    for (size_t i = 0; i < 4; i++)
    {
	    delete(animal[i]);
    }
    // system("leaks abstract");
}
