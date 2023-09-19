/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/20 00:25:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->num_contact = 0;
	this->type_info[0] = "first name   : ";
	this->type_info[1] = "last name    : ";
	this->type_info[2] = "nickname     : ";
	this->type_info[3] = "phone number : ";
	this->type_info[4] = "dark secret  : ";
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
		std::cout << BMAG << this->type_info[i] << RESET;
		getline(std::cin, contact[i]);
	}
	for (int count = 0; count < 5; count++)
	{
		if (count == 3)
			type = "num";
		else
			type = "alpha";
		if (check(contact[count], type, count) == 0)
			return ;
	}
	ct.save_contact(contact);
	if (this->num_contact < 8)
	{
		this->info[num_contact] = ct;
		this->num_contact++;
		if (this->num_contact == 8)
			this->num_contact = 0;
	}
}

int	PhoneBook::check(std::string cont, std::string type, int count)
{
	int	len = cont.length();
	if (cont.empty())
	{
		std::cout << BRED"cannot be empty\n";
		return (0);
	}
	if (type == "num")
	{
		for (int i = 0; i < len; i++)
		{
			if (!isdigit(cont[i]))
			{
				std::cout << BRED"NUMBER only\n";
				return (0);
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
				return (0);
			}
		}
	}
	return (1);
}

void	PhoneBook::SEARCH(void)
{
	display_contact();
	std::cout << BMAG"choose index that you wanna see\n";
	std::cout << BBLU"SEARCH >> ";
	int	input;
	std::cin >> input;
	if (input > 8 || input < 0 || input >= num_contact)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << BRED << "no such index exists!" << RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << BCYN;
		std::cout << this->type_info[0] << info[input].get_firstname() << std::endl;
		std::cout << this->type_info[1] << info[input].get_lastname() << std::endl;
		std::cout << this->type_info[2] << info[input].get_nickname() << std::endl;
		std::cout << this->type_info[3] << info[input].get_phone() << std::endl;
		std::cout << this->type_info[4] << info[input].get_secret() << std::endl;
		std::cin.ignore(10000, '\n');
	}
}

void	PhoneBook::display_contact(void)
{
	std::cout << BCYN"---------------------------------------------\n" << RESET;
	std::cout << BMAG"|     Index| Firstname|  Lastname|  Nickname|" << RESET << std::endl;
	std::cout << BCYN"---------------------------------------------\n" << RESET;
	for (int i = 0; i < this->num_contact; i++)
	{
		std::string fn = this->info[i].get_firstname();
		std::string ln = this->info[i].get_lastname();
		std::string nn = this->info[i].get_nickname();
		std::cout << BWHT << "|" << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << check_ten(fn) << "|";
		std::cout << std::setw(10) << std::right << check_ten(ln) << "|";
		std::cout << std::setw(10) << std::right << check_ten(nn) << "|";
		std::cout << std::endl;
		
	}
	std::cout << BCYN"---------------------------------------------\n" << RESET;
}

std::string	PhoneBook::check_ten(std::string text)
{
	if (text.length() > 10)
		return (text.substr(0, 9) + ".");
	else
		return (text);
}

