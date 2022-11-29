/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:35:27 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/29 23:33:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>
#include <new>
class Zombie
{
    std::string name;
    public:
    void    announce(void);
    Zombie  *newZombie(std::string namee);
    void    randomChump(std::string name);
};

#endif