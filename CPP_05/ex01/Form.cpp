/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:07:06 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/21 03:59:46 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
	std::cout << BRED << "Bureaucrat Destructor called\n" << RESET;
}

Form::Form(std::string const name, int const signGrade, int const execGrade)
: _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << BYEL << "[Form] Parametric Constructor Called\n" << RESET;
}

Form::Form(Form const& other) : _name(other._name), _sign(other._sign),
_signGrade(other._signGrade), _execGrade(other._execGrade)
{
	std::cout << BWHT"| Form | Copy Constructor Called" << RESET << std::endl;
}

Form&	Form::operator=(Form const& cpy)
{
	std::cout << BWHT"| Form | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->_sign = cpy._sign;
	return *this;
}

std::ostream&	operator<<(std::ostream& print, Form const& show)
{
	print << "Form's " << show.getName();
	print << ", Signed grade required : " << show.getSignG();
	print << ", Execute grade required : " << show.getSignExec() << std::endl;
	print << "Signed status : ";
	if (show.getSign())
		print << BGRN << "Signed. [✔]" << RESET;
	else
		print << BRED << "Not Signed yet. [ ]" << RESET;
	return (print);
}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_sign = true;
}

std::string Form::getName() const {return this->_name;}

bool Form::getSign() const {return this->_sign;}

int Form::getSignG() const {return this->_signGrade;}

int Form::getSignExec() const {return this->_execGrade;}
