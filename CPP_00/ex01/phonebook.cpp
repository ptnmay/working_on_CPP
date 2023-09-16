/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/16 23:14:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->num_contact = 0;
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
	if (this->num_contact < 8)
	{
		this->info[num_contact] = ct;
		this->num_contact++;
		if (this->num_contact == 8)
			this->num_contact = 0;
	}
	// std::cout << BYEL;
	// std::cout << info->get_firstname() << std::endl;
	// std::cout << info->get_lastname() << std::endl;
	// std::cout << info->get_nickname() << std::endl;
	// std::cout << info->get_phone() << std::endl;
	// std::cout << info->get_secret() << std::endl;
	// std::cout << num_contact << std::endl;
	// std::cout << "----------------------------" << std::endl;
}

void	PhoneBook::check(std::string cont, std::string type, int count)
{
	int	len = cont.length();
	if (cont.empty())
	{
		std::cout << BRED"cannot be empty\n";
		return ;
	}
	if (type == "num")
	{
		for (int i = 0; i < len; i++)
		{
			if (!isdigit(cont[i]))
			{
				std::cout << BRED"NUMBER only\n";
				return ;
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
				return ;
			}
		}
	}
}

void	PhoneBook::SEARCH(void)
{
	display_contact();
}

void	PhoneBook::display_contact(void)
{
	std::cout << BCYN"---------------------------------------------\n" << RESET;
	std::cout << BMAG"|     Index| Firstname|  Lastname|  Nickname|" << RESET << std::endl;
	std::cout << BCYN"---------------------------------------------\n" << RESET;
	

}
