/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/13 02:59:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->type_info[0] = "first name   :";
	this->type_info[1] = "last name    :";
	this->type_info[2] = "nickname     :";
	this->type_info[3] = "phone number :";
	this->type_info[4] = "dark secret  :";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << BRED"see you later!\n";
}

void	PhoneBook::ADD(void)
{
	Contact ct;
	std::string contact[5];
	std::string type = "alpha";
	// int i = 0;

	// while (i < 5)
	// {
	// 	std::cout << BMAG << this->type_info[i] << RESET << std::endl;
	// 	getline(std::cin, contact[i]);
	// 	i++;
	// }
	for (int i = 0; i < 5; i++)
	{
		std::cout << BMAG << this->type_info[i] << RESET << std::endl;
		getline(std::cin, contact[i]);
	}
	for (int count = 0; count < 5; count++)
	{
		if (count == 3)
			type = "num";
		else
			type = "alpha";
		check(contact[count], type, count);
	}
	ct.save_contact(contact);
}

void	PhoneBook::check(std::string cont, std::string type, int count)
{
	int	len = cont.length();
	if (type == "num")
	{
		for (int i = 0; i < len; i++)
		{
			if (!isdigit(cont[i]))
			{
				std::cout << BRED"NUMBER only\n";
				exit(0);
			}
		}
	}
	else if (type == "alpha")
	{
		for (int j = 0; j < len; j++)
		{
			if (isspace(cont[j]) && count == 4)
				j++;
			if (!isalpha(cont[j]) && count != 4)
			{
				std::cout << BRED"name = alphabet\n";
				exit(0);
			}
		}
	}
}

void	PhoneBook::SEARCH(void)
{
	int	i = 0;

	while (i < 5)
	{
		std::cout << BCYN"search\n";
		i++;
	}
}
