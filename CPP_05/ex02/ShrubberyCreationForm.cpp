/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:05:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/27 00:39:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << BRED << "ShrubberyCreationForm Destructor called\n" << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << BYEL << "[ShrubberyCreationForm] Parametric Constructor Called\n" << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other)
: AForm(other)
{
	// std::cout << BWHT"| ShrubberyCreationForm | Copy Constructor Called" << RESET << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& cpy)
{
	// std::cout << BWHT"| ShrubberyCreationForm | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outFile;
	std::string		file;

	if (!this->getSign())
		throw AForm::NotSignException();
	if (executor.getGrade() > this->getSignExec())
		throw AForm::GradeTooLowException();
	file = this->_target + "_shrubbery";
	outFile.open(file.c_str());
	if (!outFile.is_open())
		throw ShrubberyCreationForm::CannotOpenException();
	outFile << ASCII_TREES;
	outFile.close();
}
