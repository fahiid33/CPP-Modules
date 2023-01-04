/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/04 19:15:16 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
   try 
   {
        Bureaucrat B("aristo",12);
        ShrubberyCreationForm S("test");
        RobotomyRequestForm R("test");
        PresidentialPardonForm P("test");
        R.beSigned(B);
        B.executeForm(R);
        S.beSigned(B);
        B.executeForm(S);
        P.beSigned(B);
        B.executeForm(P);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}