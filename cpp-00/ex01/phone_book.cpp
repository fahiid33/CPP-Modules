/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:31:00 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/16 05:57:13 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void    Contact::add()
{
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
void	Contact::get_details()
{
	std::cout << "First name :"<< first_name<<std::endl;
	std::cout << "Last name :"<< last_name<<std::endl;
	std::cout << "Nickname :"<< nickname<<std::endl;
	std::cout << "Phone number :"<< phone_number<<std::endl;
	std::cout << "Darkest secret :"<< darkest_secret<<std::endl;
}

void    Contact::print_contacts()
{
    // for (int j = 0; j < i; j++)
    // {
    // }
}
void    Phonebook::set_details(int index)
{
    contacts[index].add();
}
void	Phonebook::display_contacts(int insex)
{
	contacts[insex].get_details();
}
int main()
{
    Phonebook pb;
    std::string input;
	int	index;
    int i;
    i = 0;
    while (1)
    {
		input = "";
        std::cout << "please enter ADD | SEARCH | EXIT "<< std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            pb.set_details(i);
        }
        else if (input == "SEARCH")
        {
            std::cout << "please enter an index :";
            std::cin>> index;
			pb.display_contacts(index);	
        }
        else if (input == "EXIT" || !std::cin)
            exit(0);
		// if (std::cin && (input == "ADD" || input == "SEARCH"))
    }
    
}