/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:06:04 by fstitou           #+#    #+#             */
/*   Updated: 2023/01/05 22:49:19 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (Form::getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > Form::getGradeToExecute())
        throw Form::GradeTooLowException();
    std::ofstream file;
    file.open(_target + "_shrubbery");
    file << " \n";
    file << "                                                         .\n";
    file << "                                              .         ;\n";
    file << "                 .              .              ;%     ;;   \n";
    file << "                   ,           ,                :;%  %; \n";
    file << "                    :         ;                   :;%;'     .,\n";
    file << "           ,.        %;     %;            ;        %;'    ,;\n";
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "                    `:%;.  :;bd%;          %;@%;'\n";
    file << "                      `@%:.  :;%.         ;@@%;' \n";
    file << "                        `@%.  `;@%.      ;@@%;    \n";
    file << "                          `@%%. `@%%    ;@@%;   \n";
    file << "                            ;@%. :@%%  %@@%; \n";
    file << "                              %@bd%%%bd%%:;  \n";
    file << "                                #@%%%%%:;;\n";
    file << "                                %@@%%%::;\n";
    file << "                                %@@@%(o);  . '     \n";
    file << "                                %@@@o%;:(.,'       \n";
    file << "                            `.. %@@@o%::;         \n";
    file << "                               `)@@@o%::;       \n";
    file << "                                %@@(o)::;       \n";
    file << "                               .%@@@@%::;         \n";
    file << "                               ;%@@@@%::;.        \n";
    file << "                              ;%@@@@%%:;;;. \n";
    file << "                          ...;%@@@@@%%:;;;;,..   \n";
    file << " \n";
    file.close();   
}