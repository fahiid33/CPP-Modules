/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:37:29 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/23 10:45:06 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap(void);
        DiamondTrap & operator=(DiamondTrap const & rhs);

        void	whoAmI(void);
        void	attack(std::string const & target);

    private:
        std::string	_name;
};

#endif