/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:15:04 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/02 18:25:04 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
    std::string const name;
    int grade;
    public :
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat();
    Bureaucrat & operator=(Bureaucrat const & src);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
    void signForm(Form & f);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif