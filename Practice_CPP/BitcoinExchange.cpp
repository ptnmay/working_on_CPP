/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/30 17:26:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other)
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const& cpy)
{
	if (this == &cpy)
		return *this;
	return *this;
}

//==============check input=============

bool	BitcoinExchange::checkDate(std::string date)
{
	if (date.size() == 10)
	{
		if (date[4] == '-' && date[7] == '-')
		{
			std::cout << "check date\n";
			std::istringstream yearStream(date.substr(0, 4));
			std::istringstream monthStream(date.substr(5, 2));
			std::istringstream dateStream(date.substr(8, 2));
			int year, month, day;
			if (yearStream >> year && monthStream >> month && dateStream >> day)
			{
				if (year > 0 && ((month >= 1 && month <= 12) && (day > 0 && day < 32)))
				{
					if (month == 2)
					{
						bool wrongYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
						if (wrongYear && day <= 29)
							return (true);
						if (!wrongYear && day <= 28)
							return (true);
					}
					else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
						return (true);
					else if (day <= 31)
						return (true);
				}
			}
		}
	}
	std::cout << BRED << "Error: bad input => " << date << RESET << std::endl;
	return false;
}

void	BitcoinExchange::start(std::string fileName)
{
	std::ifstream	file(fileName.c_str());
	std::string		line;
	std::string		fline;
	
	getline(file, fline);
	int	len = fline.size();
	
	std::cout << fline << "\n" << len << "\n"; //debug
	
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			if (len != 12 && fileName != "data | value")
				throw WrongFormat();
			std::cout << "here\n"; //debug
			//checkformat check year month date value
			size_t pos = fileName.find(" | ");
			// if (pos == std::string::npos)
			// {
			// 	std::cout << "Error: bad input => " << fileName << std::endl;
			// 	continue;
			// } //idk what is it
			std::string date = fileName.substr(0, pos);
			std::cout << date << " this is date\n";
			std::string value = fileName.substr(pos + 3, fileName.size());
			if (!checkDate(date))
			// if (!checkDate(date) || !checkValue(value))
				continue;
			std::cout << "pass date and value\n";
		}
	}
	else
		throw CannotOpenFile();
}