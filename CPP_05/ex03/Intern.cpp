/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:27:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 21:42:33 by psaeyang         ###   ########.fr       */
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
	if (this != &cpy)
	{
		for (int i = 0; i < 3; i++)
			this->_formName[i] = cpy._formName[i];
	}
	return (*this);
}

Intern::~Intern()
{
	
}

AForm*	Intern::makeForm(std::string const formName, std::string const targetName) const
{
	for (int i = 0; i < 3; i++)
	{
		if (formName.compare(this->_formName[i]) == 0)
		{
			std::cout << BGRN << "Intern create " << this->_formName[i] << std::endl;
			switch(i)
			{
				case 0:
					return new ShrubberyCreationForm(targetName);
				case 1:
					return new RobotomyRequestForm(targetName);
				case 2:
					return new PresidentialPardonForm(targetName);
			}
		}
	}
	std::cout << BRED << formName << "doesn't exit\n" << RESET;
	return NULL;
}
