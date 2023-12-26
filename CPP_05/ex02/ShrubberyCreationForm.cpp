/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:05:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/26 23:23:36 by psaeyang         ###   ########.fr       */
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

std::ostream&	operator<<(std::ostream& print, ShrubberyCreationForm const& show)
{
	print << "ShrubberyCreationForm's " << show.getName();
	print << ", Signed grade required : " << show.getSignG();
	print << ", Execute grade required : " << show.getSignExec() << std::endl;
	print << "Signed status : ";
	if (show.getSign())
		print << BGRN << "Signed. [✔]" << RESET;
	else
		print << BRED << "Not Signed yet. [ ]" << RESET;
	return (print);
}