/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/04 16:49:09 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form F("formula", -21,-9);
        std::cout << F;
        Bureaucrat B("aristo", 20);
        // std::cout << B;
        B.signForm(F);
        // F.beSigned(B);
        // std::cout << F;          
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}