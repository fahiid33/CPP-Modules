/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:42:50 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/11 21:11:39 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void      Harl::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void      Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void      Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void      Harl::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (level == levels[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
        {
            (this->*ptr[0])();
            break ;
        }
        case 1:
        {
            (this->*ptr[1])();
            break ;   
        }
        case 2:
        {
            (this->*ptr[2])();
            break ;
        }
        case 3:
        {
            (this->*ptr[3])();
            break ;
        }
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        }
    }
}