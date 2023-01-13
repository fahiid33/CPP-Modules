/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:41:11 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/06 15:48:10 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern  & Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return *this;
}

Form*   Intern::MakeForm(std::string f_name, std::string f_target)
{
    Form *forms[3] = {
    new PresidentialPardonForm(f_target),
    new RobotomyRequestForm(f_target),
    new ShrubberyCreationForm(f_target)
    };

    std::string names[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
    };
    int i = 0;
    while (i < 3)
    {
        if (f_name == names[i])
            break;
        i++;
    }
    switch(i)
    {
        case 0:
            std::cout << "Intern creates " << f_name << std::endl;
            return forms[0];
        case 1:
            std::cout << "Intern creates " << f_name << std::endl;
            return forms[1];
        case 2:
            std::cout << "Intern creates " << f_name << std::endl;
            return forms[2];
        default:
            std::cout << "Intern can't create " << f_name << std::endl;
            return NULL;
    }
}