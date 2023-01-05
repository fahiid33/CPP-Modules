/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:24:51 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/05 22:40:27 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name), grade(src.grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream &    operator<<(std::ostream & o, Bureaucrat const & src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return o;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
    if (this != &src)
    {
        this->grade = src.grade;
    }
    return *this;
}
std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}
void Bureaucrat::incrementGrade()
{
    try
    {
        if (this->grade - 1 < 1)
            throw GradeTooHighException();
        else
            this->grade--;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
void    Bureaucrat::decrementGrade()
{
    try
    {
        if (this->grade + 1 > 150)
            throw GradeTooLowException();
        else
            this->grade++;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

const char  *  Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char  *  Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void    Bureaucrat::signForm(Form & f)
{
    if (f.getIsSigned())
        std::cout << this->name << " signed " << f.getName() << std::endl;
    else
    {
        std::cout << this->name << " couldn't sign " << f.getName();
        std::cout << " because its grade is higher than expected" << std::endl;
    }
}   