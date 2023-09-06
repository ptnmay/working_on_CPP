/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:47:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/07 03:40:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "see you later!\n";
}

void	PhoneBook::ADD(void)
{
	int i = 0;
	
	while (i < 5)
	{
		std::cout << "name\n";
		i++;
	}
}