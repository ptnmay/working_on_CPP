/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:05:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/19 01:32:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try
	{
		// Bureaucrat	test("test", 0);
		Bureaucrat	test("test", 20);
		std::cout << test.getname() << std::endl;
		std::cout << test.getgrade() << std::endl;
		std::cout << test;
		test.increaseGrade(2);
		std::cout << test.getgrade() << std::endl;
		test.decreaseGrade(3);
		std::cout << test.getgrade() << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}