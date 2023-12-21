/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/21 15:51:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << BRED << "Bureaucrat Destructor called\n" << RESET;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other)
{
	std::cout << BWHT"| Bureaucrat | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Bureaucrat & Bureaucrat:: operator=(Bureaucrat const& cpy)
{
	std::cout << BWHT"| Bureaucrat | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->grade = cpy.grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string n, int g)
: name(n)
{
	if (g > 150)
		throw GradeTooLowException();
	else if (g < 0)
		throw GradeTooHighException();
	this->grade = g;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& print, Bureaucrat const& show)
{
	print << show.getName() << " , bureaucrat grade " << show.getGrade() << std::endl;
	return print;
}

void	Bureaucrat::increaseGrade(int amount)
{
	if (this->grade - amount < 1)
		throw GradeTooHighException();
	this->grade -= amount;
	std::cout << BGRN << this->name << " was upgraded [" << amount << "] levels." << RESET << std::endl;
}

void	Bureaucrat::decreaseGrade(int amount)
{
	if (this->grade - amount > 150)
		throw GradeTooLowException();
	this->grade += amount;
	std::cout << BYEL << this->name << " was degraded [" << amount << "] levels." << RESET << std::endl;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << BGRN << this->name << " signed " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << BRED << this->name << " couldn't sign " << form.getName();
		std::cout << " because " << e.what() << RESET << std::endl;
	}
}
