/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/25 23:24:37 by psaeyang         ###   ########.fr       */
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
			std::istringstream yearStream(date.substr(0, 4));
			std::istringstream monthStream(date.substr(5, 2));
			std::istringstream dateStream(date.substr(8, 2));
			int year, month, day;
			if (yearStream >> year && monthStream >> month&& dateStream >> day)
			{
				if (year > 0 && ((month >= 1 && month <= 12) && (day > 0 && day < 32)))
				{
					if (month == 2)
					{
						
					}
				}
			}
		}
	}
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
			// 	std::cout << "Error: bad input => " << rawData << std::endl;
			// 	continue;
			// } idk what is it
		std::string date = fileName.substr(0, pos);
		std::string value = fileName.substr(pos + 3, fileName.size());
			if (!checkDate(date) || !checkValue(value))
				continue;
			std::cout << "pass date and value\n";
		}
	}
	else
		throw CannotOpenFile();
}