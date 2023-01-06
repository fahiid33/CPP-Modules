/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/06 15:57:39 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try 
    {
        Bureaucrat b("B", 1);
        Intern i;
        Form *F;

        F = i.MakeForm("robotomy request", "Bender");
        if (F)
        {
            F->beSigned(b);
            F->execute(b);
        }
    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
    return 0;
}