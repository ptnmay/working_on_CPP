/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:46:48 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/01 21:36:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;

	AForm*	rrf;
	rrf = someRandomIntern.makeForm("kingdom ocean", "Bender");

	std::cout << "------------------------------------------\n";
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;

	std::cout << "------------------------------------------\n";
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	delete rrf;

	std::cout << "------------------------------------------\n";
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << *rrf << std::endl;
	Bureaucrat	obj("Mew", 2);
	obj.signForm(*rrf);
	obj.executeForm(*rrf);
	std::cout << *rrf << std::endl;
	delete rrf;
	return (0);
}