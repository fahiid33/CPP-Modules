/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:14:46 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/26 09:31:43 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
    std::string _type;
    public:
    Animal( void );
	Animal(std::string animal);
    Animal(Animal const & src);
    virtual ~Animal( void );
    Animal  &   operator=(Animal const & src);
    std::string getType();
    void	setType(std::string);
    virtual void makeSound() const = 0;
};


#endif