/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:24:13 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/05 05:02:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isValidFloat(const std::string& input) {
    std::istringstream iss(input);
    float value;
    iss >> std::noskipws >> value; // Use noskipws to ensure there are no trailing characters

    // Check if the entire string was consumed and a valid float was extracted
    return iss.eof() && !iss.fail();
}

bool isAllLetters(const std::string& input) {
    for (int i = 0; i < input.size(); i++)
	{
        if (!std::isalpha(static_cast<unsigned char>(input[i]))) {
            return false; // If any non-alphabetic character found, return false
        }
    }
    return true; // All characters are alphabetic
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << BRED << "Program take one parameter." << std::endl;
		std::cerr << "For example: ./convert 50" << RESET << std::endl;
		return 1;
	}
	std::string str = av[1];
	int size = str.size();
	if ((isValidFloat(av[1]) || (av[1][size - 2] != '.' && av[1][size - 1] == 'f')) && av[1][size - 1] != '.')
	{}
	else
	{
		if (isAllLetters(str))
		{}
		else
		{
			std::cout << BYEL << "Not a valid number!" << std::endl;
			return 1;
		}
    }
	ScalarConverter::convert(av[1]);
}