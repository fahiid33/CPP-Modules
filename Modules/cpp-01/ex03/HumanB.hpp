/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:49 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/07 23:18:34 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *weap;
    std::string w_name;
    public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &wp);
};

#endif