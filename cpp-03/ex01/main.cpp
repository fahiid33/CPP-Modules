/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:16:02 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 02:52:14 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scav");
    scav.attack("target");
    scav.takeDamage(70);
    scav.beRepaired(20);
    scav.guardGate();
    return 0;
}