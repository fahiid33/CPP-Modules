/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/05 23:01:58 by fstitou          ###   ########.fr       */
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
        Bureaucrat B("aristo",5);
        ShrubberyCreationForm S("ASCII tree");
        RobotomyRequestForm R("Robot");
        PresidentialPardonForm P("Document");
        S.beSigned(B);
        B.executeForm(S);
        R.beSigned(B);
        B.executeForm(R);
        P.beSigned(B);
        B.executeForm(P);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}