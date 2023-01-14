/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:47 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/11 18:52:18 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    w_name = name;
}
void    HumanB::attack(void)
{
    std::cout << w_name << " attacks with their " << weap->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &wp)
{
    weap = &wp;
}
HumanB::~HumanB()
{
    
}