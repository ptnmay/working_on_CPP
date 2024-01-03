/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:24:13 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/02 22:27:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << BRED << "Program take one parameter." << std::endl;
		std::cerr << "For example: ./convert 50" << RESET << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
}