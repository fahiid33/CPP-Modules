/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 02:38:30 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/10 18:42:00 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"

class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void print(T const &x)
{
    std::cout << x << " ";
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    std::string str[3] = {"hello", "world", "!"};
    Awesome O_tab[5];
    std::cout << "int array : ";
    iter(array, 5, print);
    std::cout << std::endl;
    std::cout << "str array : ";
    iter(str,3, print);
    std::cout << std::endl;
    std::cout << "objects array : ";
    iter(O_tab, 5, print);
    std::cout << std::endl;
    return (0);
}