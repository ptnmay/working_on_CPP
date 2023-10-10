/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:35:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/11 02:48:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
	{
        std::cerr << BRED"Usage: " << av[0] << " <filename> <s1> <s2>" << RESET << std::endl;
		return 1;
	}
	const std::string filename = av[1];
	const std::string s1 = av[2];
	const std::string s2 = av[3];

	std::ifstream inputFile(filename);
	if (!inputFile)
	{
		std::cerr << BRED"Error: Cannot open input file " << filename << RESET << std::endl;
		return 1;
	}
	
	const std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile)
	{
		std::cerr << BRED"Error: Cannot create output file " << outputFilename << RESET << std::endl;
		return 1;
	}
	
	char currentChar;
	std::string tmp;
	while (inputFile.get(currentChar))
	{
		if (currentChar == s1[0])
		{
			tmp += currentChar;
			size_t lens1 = 1;
			while (lens1 < s1.length() && inputFile.get(currentChar))
			{
				tmp += currentChar;
				if (currentChar == s1[lens1])
					lens1++;
				else
					break ;
			}
			if (lens1 == s1.length())
			{
				outputFile << s2;
				tmp.clear();
			}
			else
			{
				outputFile << tmp;
				tmp.clear();
			}
		}
		else
			outputFile << currentChar;
	}
	inputFile.close();
	outputFile.close();
    std::cout << BCYN"File '" << filename << "' has been processed. Modified content saved to '" << outputFilename << "'" << RESET << std::endl;
	return 0;
}