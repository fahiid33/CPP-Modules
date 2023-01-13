/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:16:02 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 00:24:07 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("trap");
    claptrap.attack("lbeldi");
    claptrap.takeDamage(10);
    claptrap.beRepaired(10);
    return 0;
}