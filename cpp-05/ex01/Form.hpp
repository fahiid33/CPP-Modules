/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:43:06 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/02 18:25:48 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private :
    std::string const name;
    bool is_signed;
    int const grade_to_sign;
    int const grade_to_execute;
    public :
    // Form();
    Form(std::string name, int grade_to_sign, int grade_to_execute);
    Form(Form const & src);
    ~Form();
    Form & operator=(Form const & src);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const & src);
    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
