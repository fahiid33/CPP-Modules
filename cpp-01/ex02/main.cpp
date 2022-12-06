/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:36 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/06 00:43:04 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    // the adresses
     std::cout << "str = "<< &str << std::endl;
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "ref = " << &ref << std::endl;
    //the values
    std::cout << "str = "<< str << std::endl;
    std::cout << "ptr = " << *ptr << std::endl;
    std::cout << "ref = " << ref << std::endl;
}