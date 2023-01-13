/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/06 18:27:58 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form F("formula", 33, 9);
        std::cout << F;
        Bureaucrat B("aristo", 22);
        // std::cout << B;
        F.beSigned(B);
        B.signForm(F);
        std::cout << F;          
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}