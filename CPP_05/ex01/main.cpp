/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:05:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/21 04:26:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


struct Param
{
	std::string	a;
	int			b;
	int			c;
};

void	testForm()
{
	Param	param[] = {
		{"Warrior", 0, 20},
		{"Archer", 20, 0},
		{"Mage", 151, 20},
		{"Acolyte", 20, 151},
		{"Merchant", 0, 0},
		{"Thief", 151, 151}};
	for (int i = 0; i < 6; i++)
	{
		try
		{
			Form	form(param[i].a, param[i].b, param[i].c);
		}
		catch (std::exception & e)
		{
			std::cout << BRED << e.what() << RESET << std::endl;
		}
	}
}

int	main(void)
{
	// testForm();
	std::cout << std::endl;
	try
	{
		Form		form("Warrior", 30, 20);
		Bureaucrat	obj1("Mark", 30);
		Bureaucrat	obj2("Mos", 31);

		std::cout << form << std::endl;
		std::cout << obj1 << std::endl;
		std::cout << obj2 << std::endl;

		obj1.signForm(form);
		std::cout << form << std::endl;
		obj2.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << BRED << e.what() << RESET << std::endl;
	}
	return (0);
}
// int main()
// {
// 	std::cout << BMAG << "\n---- TEST 0 ----" << RESET << std::endl;
// 	std::cout << BYEL << "case : Normal assign" << RESET << std::endl;
// 	Form sheet0;
// 	Form sheet1("A", 75, 50);
// 	Form sheet2(sheet0);
// 	Form sheet3 = sheet1;
// 	std::cout << sheet0;
// 	std::cout << sheet1;
// 	std::cout << sheet2;
// 	std::cout << sheet3;
// }