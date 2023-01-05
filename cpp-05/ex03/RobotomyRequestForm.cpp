/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:05:58 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/04 18:57:05 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    this->_target = rhs._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << this->_target <<" has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << this->_target << " robotomization failed" << std::endl;
}