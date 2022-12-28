/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:54:47 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/28 11:08:46 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "Idea " + std::to_string(i);
        i++;
    }
    std::cout << "Brain Default constructor called"<< std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout<< "Brain copy constructor called"<< std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
}

Brain  & Brain::operator=(Brain const & rhs)
{
    std::cout<< "Brain copy assignment called"<< std::endl;
    if (this != &rhs)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = rhs.ideas[i];
            i++;
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called"<< std::endl;
}