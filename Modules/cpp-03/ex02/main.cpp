/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:59:03 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 03:02:28 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("Frag");
    frag.attack("target");
    frag.takeDamage(100);
    frag.beRepaired(50);
    frag.highFivesGuys();
    return (0);
}