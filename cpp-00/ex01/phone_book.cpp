/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:31:00 by fstitou           #+#    #+#             */
/*   Updated: 2022/11/18 03:38:32 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"
#include <sstream>
#include <stdlib.h>
#include <iomanip>

int	Contact::add()
{
	std::string s, s1, s2, s3, s4;
	std::cout << "First name :";
	std::getline(std::cin, s);
	if (!std::cin)
		exit(0);
	std::cout << "Last name :";
	std::getline(std::cin, s1);
	if (!std::cin)
		exit(0);
	std::cout << "Nickname :";
	std::getline(std::cin, s2);
	if (!std::cin)
		exit(0);
	std::cout << "Phone number :";
	std::getline(std::cin, s3);
	if (!std::cin)
		exit(0);
	std::cout << "Darkest secret :";
	std::getline(std::cin, s4);
	if (!std::cin)
		exit(0);
	if (s.empty() && s1.empty() && s2.empty()
			&& s3.empty() && s4.empty())
	{
		std::cout << std::setw(50);
		std::cout<<"A saved contact can't have empty fields"<<std::endl;
		return (0);
	}
	first_name = s;
	last_name = s1;
	nickname = s2;
	phone_number = s3;
	darkest_secret = s4;
	return (1);
}

void	Contact::get_details()
{
	std::cout << "First name :"<< first_name<<std::endl;
	std::cout << "Last name :"<< last_name<<std::endl;
	std::cout << "Nickname :"<< nickname<<std::endl;
	std::cout << "Phone number :"<< phone_number<<std::endl;
	std::cout << "Darkest secret :"<< darkest_secret<<std::endl;
}

int	Phonebook::set_details(int index)
{
	if (contacts[index].add())
		return (1);
	return (0);
}
int	Phonebook::is_strdigit(std::string& str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return(1);
}

void	Contact::table_index(int index)
{
	std::string	s;
	std::cout<< std::setw(10)<< index << "|";
	s = first_name;
	if (s.length() > 10)
	{
		s.resize(10);
		s.back() = '.';
	}
	std::cout << std::setw(10) << s << "|";
	s = last_name;
	if (s.length() > 10)
	{
		s.resize(10);
		s.back() = '.';
	}
	std::cout << std::setw(10) << s << "|";
	s = nickname;
	if (s.length() > 10)
	{
		s.resize(10);
		s.back() = '.';
	}
	std::cout << std::setw(10) << s << std::endl;
}

void	Phonebook::display_contacts(int i)
{
	int indexx;
	std::string index;
	std::cout << std::setw(10) << "index";
	std::cout << std::setw(10) << "|first name";
	std::cout << std::setw(10) << "|last name";
	std::cout << std::setw(10) << "|nickname" << std::endl;
	for (int j = 0; j < i; j++)
		contacts[j].table_index(j);
	std::cout << "please enter an index :";
	std::getline(std::cin, index);
	if (!std::cin)
		exit(0);
	if (index.empty() || !is_strdigit(index))
		std::cout <<std::setw(40)<< "index must be a positive number"<< std::endl;
	else
	{
		indexx = std::stoi(index);
		if (indexx >= i)
			std::cout << std::setw(40) << "No informations try again "<< std::endl;
		else
			contacts[indexx].get_details();
	}
}
int main()
{
	Phonebook	pb;
	std::string	input;
	int			i;
	int			k;

	i = 0;
	k = 0;
	while (1)
	{
		std::cout << "please enter ADD | SEARCH | EXIT "<< std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (k == 8)
				i = 0;
			if (pb.set_details(i))
			{
				i++;
				if (k != 8)
					k++;
			}
		}
		else if (input == "SEARCH")
			pb.display_contacts(k);
		else if (input == "EXIT" || !std::cin)
			exit(0);
	}

}
