/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:40:21 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/31 17:28:42 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("aristocrat", -1);
        for (int i = 1; i < 200; i++)
        {
            b.decrementGrade();
        }
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}