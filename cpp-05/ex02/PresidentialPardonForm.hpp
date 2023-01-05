/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:05:55 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/05 22:59:26 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public :
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        void execute(Bureaucrat const & executor) const;
};

#endif