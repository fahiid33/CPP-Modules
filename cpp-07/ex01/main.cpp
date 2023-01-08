/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 02:38:30 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/08 02:47:33 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << " ";
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    std::string str[3] = {"hello", "world", "!"};
    std::cout << "int array : ";
    iter(array, 5, print);
    std::cout << std::endl;
    std::cout << "str array : ";
    iter(str,3, print);
    std::cout << std::endl;
    return (0);
}