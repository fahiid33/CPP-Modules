/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:56:37 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/30 01:04:48 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = NULL;
    z = newZombie("haha");
    z->announce();
    // delete z;
    randomChump("papa");
    // z->announce();
}