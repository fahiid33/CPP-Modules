/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:35:25 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/30 00:57:23 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<<"constructor called"<< std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<< "destructor name: "<<name << "is being destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    Zombie z;
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string prenom)
{
    name = prenom;
}