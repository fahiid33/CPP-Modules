/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:15:51 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 00:36:51 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    _energy_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
    _energy_points += amount;
}
