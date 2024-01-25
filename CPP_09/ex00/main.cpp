/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:38:56 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/25 16:30:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << BRED << "./bct <input file>\n" << RESET;
		return 0;
	}
	try
	{
		BitcoinExchange btc;
		btc.start(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
	
}