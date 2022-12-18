/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:15:20 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 02:49:32 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hit_points;
        int _energy_points;
        int _attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const & rhs);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif