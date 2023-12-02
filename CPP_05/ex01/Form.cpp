/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:07:06 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/03 02:58:04 by psaeyang         ###   ########.fr       */
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
	
}