/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/02/20 01:21:10 by psaeyang         ###   ########.fr       */
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
}

bool BitcoinExchange::create_data()
{
	std::string name = "data.csv";
	std::ifstream file;
	if (!check_data(name))
		return (false);
	file.open(name.c_str(), std::fstream::in);
	if (!file.is_open())
		return (false);
	std::string line;
	std::getline(file, line);
	// while (std::getline(file, line))
	// 	add_data(line);
	file.close();
	return (true);
}

bool check_data(std::string const& name)
{
	size_t n;
	
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

