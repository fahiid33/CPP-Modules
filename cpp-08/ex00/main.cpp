/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:48:24 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/11 23:28:52 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(10 * i);
    for (int k = 0; k < (int)v.size(); k++)
        std::cout << "v["<< k << "] = " << v[k] << " ";
    std::cout << std::endl;
    try
    {
        easyfind(v, 50);
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    try
    {
        easyfind(v, 80);
    }
    catch(const std::exception& e)
    {
        std::cout << "Not found" << std::endl;
    }
    try
    {
        easyfind(v, 100);
    }
    catch(const std::exception& e)
    {
        std::cout << "Not found" << std::endl;
    }
}