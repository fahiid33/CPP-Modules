/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:52:44 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/07 23:00:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    Weapon& weapon;
    std::string w_name;
    public:
    HumanA(std::string wp_name, Weapon &wp);
    ~HumanA();
    void    attack();
};

#endif
