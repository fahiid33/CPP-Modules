/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:29:07 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/14 00:44:43 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    std::list <int> list;
    mstack.push(5);
    mstack.push(17);
    list.push_back(5);
    list.push_back(17);
    std::cout << "mstack.top = "<< mstack.top() << std::endl;
    std::cout << "list.top = "<< list.back() << std::endl;
    mstack.pop();
    list.pop_back();
    std::cout << "mstack.size = "<< mstack.size() << std::endl;
    std::cout << "list.size = "<< list.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::list <int>::iterator list_it = list.begin();
    std::list <int>::iterator list_ite = list.end();
    ++it;
    --it;
    ++list_it;
    --list_it;
    std::cout << "mstack.size = "<< mstack.size() << std::endl;
    std::cout << "list.size = "<< mstack.size() << std::endl;
    std::cout << "mstack it distance = "<< std::distance(it, ite) << std::endl;
    std::cout << "list it distance = "<< std::distance(list_it, list_ite) << std::endl;
    while (it != ite)
    {
        std::cout << "mstack it = "<< *it << std::endl;
        std::advance(it, 1);
    }
     while (list_it != list_ite)
    {
        std::cout << "list it = "<< *list_it << std::endl;
        std::advance(list_it, 1);
    }
}