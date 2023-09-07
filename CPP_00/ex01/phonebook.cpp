/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/08 03:51:39 by psaeyang         ###   ########.fr       */
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
	
	while (i < 5)
	{
		std::cout << BMAG << this->type_info[i] << RESET << std::endl;
		getline(std::cin, contact[i]);
		i++;
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
