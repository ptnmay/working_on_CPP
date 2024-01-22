/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/23 02:32:37 by psaeyang         ###   ########.fr       */
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
int		BitcoinExchange::isCSV(std::string csv)
{
	std::string::size_type	n;
	n = csv.rfind(".csv");
	if (n == std::string::npos || (csv.length() - n != 4))
		return 1;
	return 0;
}

int		BitcoinExchange::csvFile(std::string csv)
{
	std::ifstream	fd;
	if (isCSV(csv) == 1)
		return 1;
	fd.open(csv.c_str(), std::ifstream::in);
	if (!fd.is_open())
		return 1;
	
}

void	BitcoinExchange::checkFile(std::string const& av)
{
	std::ifstream	fd;
	std::string		csv = "data.csv";
	if (csvFile(csv) == 1)
		throw NotDataCSV();
	
}