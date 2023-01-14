/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:15:29 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/19 02:08:29 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);
        void makeSound() const;
        std::string getType();
    private:
        Brain *_brain;
};


#endif