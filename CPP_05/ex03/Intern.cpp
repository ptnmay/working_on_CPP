/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:27:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 03:01:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_formName[0] = "shrubbery creation";
	this->_formName[1] = "robotomy request";
	this->_formName[2] = "presidential pardon";
}

Intern::Intern(Intern const& other)
{
	this->_formName[0] = other._formName[0];
	this->_formName[1] = other._formName[1];
	this->_formName[2] = other._formName[2];
}

Intern& Intern::operator=(Intern const& cpy)
{
	*this = cpy;
	return *this;
}

Intern::~Intern()
{
	
}

AForm*	makeForm(std::string const formName, std::string const targetName) const
{
	
}
