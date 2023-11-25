/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:05:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/25 00:08:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	test("test", 20);
		std::cout << BMAG << "getName:: " << test.getName() << RESET << std::endl;
		std::cout << BWHT << "getGrade:: " << test.getGrade() << RESET << std::endl;
		std::cout << BCYN << test << RESET;
		test.increaseGrade(2);
		std::cout << BWHT << "getGrade:: " << test.getGrade() << RESET << std::endl;
		test.decreaseGrade(3);
		std::cout << BWHT << "getGrade:: " << test.getGrade() << RESET << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << BRED << e.what() << RESET << std::endl;
	}
}