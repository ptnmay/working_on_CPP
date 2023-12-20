/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:07:06 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/20 23:46:25 by psaeyang         ###   ########.fr       */
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

Form::Form(Form const& other)
{
	std::cout << BWHT"| Form | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}
