/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:47 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/06 02:12:17 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    std::cout<< "HumanB constructor called"<< std::endl;
}
HumanB::~HumanB(void)
{
    std::cout << "HumanB desructor is being destroyed" << std::endl;
}
HumanB::attack()
{
    std::cout << "HumanA attacks with their" << weapon.
}