/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:33:53 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 02:49:48 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
    std::cout << "ScavTRap Copy Constructor called" << std::endl;
    *this = src;
}

ScavTrap::ScavTrap(std::string const Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

void ScavTrap::attack(std::string const & target)
{
     std::cout << "ScavTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " point of damage!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called " << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		std::cout << "ScavTrap Assignement called" << std::endl;
        _hit_points = rhs._hit_points;
        _attack_damage = rhs._attack_damage;
        _energy_points = rhs._energy_points;
	}
	return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap enter mode : Gate Keeper" << std::endl;
}