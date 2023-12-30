/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:13 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 21:54:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm()
{
	std::cout << BRED << "Bureaucrat Destructor called\n" << RESET;
}

AForm::AForm(std::string const name, int const signGrade, int const execGrade)
: _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << BYEL << "[AForm] Parametric Constructor Called\n" << RESET;
}

AForm::AForm(AForm const& other) : _name(other._name), _sign(other._sign),
_signGrade(other._signGrade), _execGrade(other._execGrade)
{
	std::cout << BWHT"| AForm | Copy Constructor Called" << RESET << std::endl;
}

AForm&	AForm::operator=(AForm const& cpy)
{
	std::cout << BWHT"| AForm | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->_sign = cpy._sign;
	return *this;
}

std::ostream&	operator<<(std::ostream& print, AForm const& show)
{
	print << "AForm's " << show.getName();
	print << ", Signed grade required : " << show.getSignG();
	print << ", Execute grade required : " << show.getSignExec() << std::endl;
	print << "Signed status : ";
	if (show.getSign())
		print << BGRN << "Signed. [✔]" << RESET;
	else
		print << BRED << "Not Signed yet. [ ]" << RESET;
	return (print);
}

void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_sign = true;
}

std::string AForm::getName() const {return this->_name;}

bool AForm::getSign() const {return this->_sign;}

int AForm::getSignG() const {return this->_signGrade;}

int AForm::getSignExec() const {return this->_execGrade;}
