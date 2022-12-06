/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:13:02 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/06 00:15:16 by fstitou          ###   ########.fr       */
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
void    Zombie::SetName(std::string namee)
{
    name = namee;
}