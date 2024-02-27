/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/02/27 16:03:24 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string const &av)
{
	std::ifstream input;

	if (!create_data())
		throw ErrorDatabase();
	std::cout << "after create data\n";
}

void	BitcoinExchange::addData(std::string const& line)
{
	std::string date, price;
	float		convert;
	std::string::size_type	n = line.find(',');

	if (n != line.find(','))
	{
		std::cout << "wrong format\n";
		return ;
	}
	date = line.substr(0, n);
	price = line.substr(n + 1);
	convert = atof(price.c_str());
	_database.insert(std::pair<std::string, float>(date, convert));
}

int BitcoinExchange::create_data(void)
{
	std::string name = "data.csv";
	std::ifstream file;
	if (!check_data(name))
		return (1);
	file.open(name.c_str(), std::fstream::in);
	if (!file.is_open())
		return (1);
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		addData(line);
	}
	file.close();
	return (0);
}

int BitcoinExchange::check_data(std::string const& name)
{
	size_t n;
	
	n = name.rfind(".csv");
	if (n == std::string::npos || (name.length() - n != 4))
		return (1);
	return (0);
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

