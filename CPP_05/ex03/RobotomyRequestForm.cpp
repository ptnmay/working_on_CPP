/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 22:01:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << BRED << "RobotomyRequestForm Destructor called\n" << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	// std::cout << BYEL << "[RobotomyRequestForm] Parametric Constructor Called\n" << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
: AForm(other)
{
	// std::cout << BWHT"| RobotomyRequestForm | Copy Constructor Called" << RESET << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& cpy)
{
	// std::cout << BWHT"| RobotomyRequestForm | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw AForm::NotSignException();
	if (executor.getGrade() > this->getSignExec())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << BGRN << "Bzzzz, " << this->_target << " has been robotomized" << RESET << std::endl;
	else
		std::cout << BRED << "!!!, failed to robotomy to "<< this->_target << RESET << std::endl;
}

