/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:41 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/07 23:36:20 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string wp_name, Weapon &wp) : weapon(wp), w_name(wp_name)
{
}

void    HumanA::attack()
{
    std::cout << w_name << " attacks with their " << weapon.getType()<< std::endl;
    
}
HumanA::~HumanA()
{

}
