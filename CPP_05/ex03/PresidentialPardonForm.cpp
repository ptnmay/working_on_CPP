/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:15 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 22:01:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << BRED << "PresidentialPardonForm Destructor called\n" << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	// std::cout << BYEL << "[PresidentialPardonForm] Parametric Constructor Called\n" << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other)
: AForm(other)
{
	// std::cout << BWHT"| PresidentialPardonForm | Copy Constructor Called" << RESET << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& cpy)
{
	// std::cout << BWHT"| PresidentialPardonForm | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw AForm::NotSignException();
	if (executor.getGrade() > this->getSignExec())
		throw AForm::GradeTooLowException();
	std::cout << BGRN << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}