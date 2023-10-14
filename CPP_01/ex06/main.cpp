/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:59:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/15 01:17:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << BRED"Usage: " << av[0] << " <log_level>" << std::endl;
		return 1;
	}
	Harl harl;
	std::string lev[] = {"debug", "info", "warning", "error"};
	
	int n = -1;
	for (int i = 0; i < 4; i++)
	{
		if (lev[i] == av[1])
			n = i;
	}
	switch (n)
	{
		case 0:
			harl.complain("debug");
		case 1:
			harl.complain("info");
		case 2:
			harl.complain("warning");
		case 3:
			harl.complain("error");
			break;
		default:
			std::cout << BRED"[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
	return 0;
}