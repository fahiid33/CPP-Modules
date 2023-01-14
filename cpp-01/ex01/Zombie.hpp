/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:12:12 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/06 00:12:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>
#include <new>
class Zombie
{
    private:
    std::string name;
    public:
    Zombie(void);
    ~Zombie(void);
    Zombie(std::string prenom);
    void    announce(void);
    void    SetName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif