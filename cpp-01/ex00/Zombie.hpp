/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:35:27 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/30 00:52:15 by fstitou          ###   ########.fr       */
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
    Zombie(void);
    ~Zombie(void);
    Zombie(std::string prenom);
    void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
#endif