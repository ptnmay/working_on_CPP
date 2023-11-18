/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:13:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/19 00:58:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string n, int g)
: name(n)
{
	if (g > 150)
		throw GradeTooLowException();
	else if (g < 0)
		throw GradeTooHighException();
	this->grade = g;
}

std::string Bureaucrat::getname() const
{
	return (this->name);
}

int	Bureaucrat::getgrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& print, Bureaucrat const& show)
{
	print << show.getname() << " , bureaucrat grade " << show.getgrade() << std::endl;
	return print;
}
