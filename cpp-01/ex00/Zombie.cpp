/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:35:25 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/05 22:54:42 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<<"constructor called"<< std::endl;
}

Zombie::~Zombie(void)
{
    std::cout<< "destructor name: "<< this->name << " is being destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout<< this->name <<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string prenom)
{
    name = prenom;
}