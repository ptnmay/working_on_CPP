/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:46:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 01:42:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testShrub()
{
	try
	{
		ShrubberyCreationForm	form("Nano");
		Bureaucrat	obj("Boji", 145);

		std::cout << form << std::endl;
		std::cout << obj << std::endl;
		obj.signForm(form);
		obj.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << BRED << e.what() << RESET << std::endl;
	}
}

void	testRobot()
{
	try
	{
		RobotomyRequestForm	form("Nano");
		Bureaucrat	obj("Boji", 45);

		std::cout << form << std::endl;
		std::cout << obj << std::endl;
		obj.signForm(form);
		obj.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << BRED << e.what() << RESET << std::endl;
	}
}

void	testPresiden()
{
	try
	{
		PresidentialPardonForm	form("Nano");
		Bureaucrat	obj("Boji", 5);

		std::cout << form << std::endl;
		std::cout << obj << std::endl;
		obj.signForm(form);
		obj.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << BRED << e.what() << RESET << std::endl;
	}
}

int	main(void)
{
	testShrub();
	std::cout << "===========================================\n";
	testRobot();
	std::cout << "===========================================\n";
	testPresiden();
	std::cout << "===========================================\n";
	return (0);
}