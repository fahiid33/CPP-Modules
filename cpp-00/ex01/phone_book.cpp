/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:31:00 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/16 01:14:37 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void    Contact::add()
{
    std::string input1;
    std::cout << "First name :";
    std::getline(std::cin, first_name);
    std::cout << "Last name :";
    std::getline(std::cin, last_name);
    std::cout << "Nickname :";
    std::getline(std::cin, nickname);
    std::cout << "Phone number :";
    std::getline(std::cin, phone_number);
    std::cout << "Darkest secret :";
    std::getline(std::cin, darkest_secret);
}

void    Phonebook::set_details(int index)
{
    contacts[index].add();
}
int main()
{
    Phonebook pb;
    std::string input;
    int i;
    i = 0;
    while (1)
    {
        std::cout << "please enter ADD | SEARCH | EXIT "<< std::endl;
        std::getline(std::cin, input);
        if (input == "ADD" )
        {
            pb.set_details(i);
        }
        else if (input == "SEARCH")
        {
            std::cout << "please enter an index :";
            std::getline(std::cin, input);
        }
        else if (input == "EXIT")
            exit(0);
        i++;
    }
    
}