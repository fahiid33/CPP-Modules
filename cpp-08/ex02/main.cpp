/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:29:07 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/12 22:53:42 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "mstack.top = "<< mstack.top() << std::endl;
    mstack.pop();
    std::cout << "mstack.size = "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "mstack.size = "<< mstack.size() << std::endl;
    std::cout << "it distance = "<< std::distance(mstack.begin(), mstack.end()) << std::endl;
    while (it != ite)
    {
        std::cout << "it = "<< *it << std::endl;
        std::advance(it, 1);
    }
}