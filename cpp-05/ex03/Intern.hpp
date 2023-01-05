/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:05:44 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/05 23:10:49 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

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
