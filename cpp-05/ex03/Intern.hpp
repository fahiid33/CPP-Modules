/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:05:44 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/06 15:44:26 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
    private:

    public:
    Intern();
    ~Intern();
    Intern(Intern const & src);
    Intern  & operator=(Intern const & rhs);
    Form    *MakeForm(std::string f_name, std::string f_target);
};


#endif
