/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:37:11 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/11 20:51:35 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
    private:
    void debug( void );
    void info( void );
    void warning ( void );
    void error ( void );
    public:
    Harl( void ){};
    ~Harl( void ){};
    void    complain( std::string level );
};

#endif