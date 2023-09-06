/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 01:30:01 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/07 03:25:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	ph;
	
	while (1 && !std::cin.eof())
	{
		std::cout << "phonebook ::";
		getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
			ph.ADD();
		// else if (cmd == "SEARCH")
		// 	ph.SEARCH();
	}
	return (0);
}