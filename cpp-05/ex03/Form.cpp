/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:51:16 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/04 17:37:28 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form()
// {
//     // std::cout << "Form default constructor called" << std::endl;
// }

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    try
    {
        if (grade_to_sign < 1 || grade_to_execute < 1)
            throw Form::GradeTooHighException();
        else if (grade_to_execute > 150 || grade_to_sign > 150)
            throw Form::GradeTooLowException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
Form::Form(Form const & src) : name(src.name), is_signed(src.is_signed), grade_to_sign(src.grade_to_sign), grade_to_execute(src.grade_to_execute)
{
    try
    {
        if (grade_to_sign < 1 || grade_to_execute < 1)
            throw Form::GradeTooHighException();
        else if (grade_to_execute > 150 || grade_to_sign > 150)
            throw Form::GradeTooLowException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
const char  *  Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char  *  Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char  *  Form::FormNotSignedException::what() const throw()
{
    return "Form not signed successfully";
}

Form::~Form()
{
    // std::cout << "Form destructor called" << std::endl;
}

std::ostream &    operator<<(std::ostream & o, Form const & src)
{
    o << src.getName() << ", form grade to sign " ;
    o << src.getGradeToSign() << ", form grade to execute ";
    o << src.getGradeToExecute() << std::endl;
    o << "status : Form is " << (src.getIsSigned() ? "Well Signed" : "Not signed")<< std::endl;
    return o;
}

Form & Form::operator=(Form const & src)
{
    this->is_signed = src.is_signed;
    return *this;
}
//------------------------------------------------------------//
                // class Getters //
//------------------------------------------------------------//

std::string Form::getName() const
{
    return this->name;
}

int    Form::getGradeToSign() const
{
    return this->grade_to_sign;
}
bool    Form::getIsSigned() const
{
    return this->is_signed;
}

int    Form::getGradeToExecute() const
{
    return this->grade_to_execute;
}
//------------------------------------------------------------//
                // class Methods //
//------------------------------------------------------------//

void    Form::beSigned(Bureaucrat const & src)
{
    try
    {
        if (src.getGrade() > this->grade_to_sign)
            throw Form::GradeTooLowException();
        else
            this->is_signed = true;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}