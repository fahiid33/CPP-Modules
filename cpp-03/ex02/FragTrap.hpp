/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:54:21 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/18 03:01:40 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        FragTrap & operator=(FragTrap const & rhs);
        void highFivesGuys(void);
        void attack(std::string const & target);
    private:
        
        
};

#endif