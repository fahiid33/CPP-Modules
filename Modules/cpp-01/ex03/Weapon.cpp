/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:57 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/07 20:22:21 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    type = weapon;
}

Weapon::~Weapon(void)
{
    
}
std::string const Weapon::getType(void)
{
    return (type);
}
void Weapon::setType(std::string Typee)
{
    type = Typee;
}