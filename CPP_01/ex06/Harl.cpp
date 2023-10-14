/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 02:01:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/14 02:06:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << BWHT"DEBUG :: " << RESET;
	std::cout << BGRN"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BWHT"INFO :: " << RESET;
	std::cout << BCYN"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << BWHT"WARNING :: " << RESET;
	std::cout << BMAG"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << BWHT"ERROR :: " << RESET;
	std::cout << BYEL"This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	switch (expression)
	{
	case /* constant-expression */:
		/* code */
		break;
	
	default:
		break;
	}
}
