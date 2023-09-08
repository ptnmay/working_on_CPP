/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/09 00:14:51 by psaeyang         ###   ########.fr       */
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
	int i = 0;
	std::string contact[5];
	std::string type = "alpha";
	
	while (i < 5)
	{
		std::cout << BMAG << this->type_info[i] << RESET << std::endl;
		getline(std::cin, contact[i]);
		i++;
	}
	for (int count = 0; count < 5; count++)
	{
		if (count == 3)
			type = "num";
		else
			type = "alpha";
		check(contact[count], type);
	}
	// save_contact(contact);
}

void	PhoneBook::check(std::string cont, std::string type)
{
	int	len = cont.length();
	if (type == "num")
	{
		for (int i = 0; i < len; i++)
		{
			if (!isdigit(cont[i]))
			{
				std::cout << cont[i];
				std::cout << BRED"Phone number must be NUMBER\n";
				exit(0);
			}
		}
	}
	else if (type == "alpha")
	{
		for (int j = 0; j < len; j++)
		{
			if (!isalpha(cont[j]))
			{
				std::cout << BRED"All info. must be alpabet\n";
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
