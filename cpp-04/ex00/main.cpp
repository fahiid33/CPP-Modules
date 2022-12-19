/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:12:11 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 01:37:57 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " sounds like: ";
    j->makeSound() ;
    std::cout << i->getType() << " sounds like: ";
    i->makeSound();
    std::cout << meta->getType() << " sounds like: ";
    meta->makeSound();

    std::cout << "------------WrongAnimal-------------" << std::endl;

    WrongAnimal* meta2 = new WrongAnimal();
    WrongAnimal* j2 = new WrongCat();
    WrongAnimal* i2 = new WrongDog();
    std::cout << j2->getType() << " sounds like: ";
    j2->makeSound();
    std::cout << i2->getType() << " sounds like: ";
    i2->makeSound();
    std::cout << meta2->getType() << " sounds like: ";
    meta2->makeSound();
    return 0;
}
