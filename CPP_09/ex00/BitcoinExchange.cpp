/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/25 03:36:47 by scharuka         ###   ########.fr       */
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

time_t	convert_date(std::string const &date)
{
	std::string		sub[3];

	sub[0] = date.substr(0, 4);
	sub[1] = date.substr(5, 2);
	sub[2] = date.substr(8, 2);

	tm	d = {};

	d.tm_year = std::atoi(sub[0].c_str());
	d.tm_mon = std::atoi(sub[1].c_str());
	d.tm_mday = std::atoi(sub[2].c_str());

	time_t	t = mktime(&d);
	return (t);
}

void	calculate(time_t timedate, float &amount, std::string date_str)
{
	std::map<std::string, float>::iterator begin = _database.begin();
	std::map<std::string, float>::iterator end = _database.end();
	std::map<std::string, float>::iterator it;


}

void	read_line(std::string const& line)
{
	std::size_t	pipe = line.find('|');
	float	amount;
	std::string	amount_str;
	std::string	date;
	time_t		valid_date;

	if (!bad_input(line))
	{
		std::cout << "Error: " << "bad input => " << line << "\n";
		return ;
	}
	amount_str = line.substr(pipe + 2);
	amount = atof(amount_str.c_str());
	if (amount < 0)
	{
		std::cout << "Error: not a positive number\n";
		return ;
	}
	if (amount > 1000)
	{
		std::cout << "Error: too high\n";
		return ;
	}
	date = line.substr(0, pipe -1);
	valid_date = convert_date(date);
	calculate(valid_date, amount, date);
}

void	read_input(std::ifstream &file)
{
	std::string	line;

	getline(file, line);
	while (getline(file, line))
		read_line(line);
}

bool	check_file(std::ifstream &file, std::string const &input)
{
	file.open(input.c_str(), std::fstream::in);
	if (!file.is_open())
		return (false);
	return (true);
}

void	BitcoinExchange::addData(std::string const& line)
{
	std::string date, price;
	float		convert;
	std::string::size_type	n = line.find(',');

	if (n != line.rfind(','))
	{
		std::cout << "wrong format\n";
		return ;
	}
	date = line.substr(0, n);
	price = line.substr(n + 1);
	convert = atof(price.c_str());
	_database.insert(std::pair<std::string, float>(date, convert));
}

bool BitcoinExchange::create_data(void)
{
	std::string name = "data.csv";
	std::ifstream file;
	if (!check_data(name))
		return (false);
	file.open(name.c_str(), std::fstream::in);
	if (!file.is_open())
		return (-1);
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		addData(line);
	}
	file.close();
	return (true);
}

bool BitcoinExchange::check_data(std::string const& name)
{
	size_t n;

	n = name.rfind(".csv");
	if (n == std::string::npos)
		return (-1);
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

