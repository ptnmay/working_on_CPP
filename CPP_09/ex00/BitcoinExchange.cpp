/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:32 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/25 22:42:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string const &av)
{
	std::ifstream input;

	if (!create_data())
		throw ErrorDatabase();
	if (!check_file(input, av))
		throw CannotOpenFile();
	read_input(input);
}

time_t	BitcoinExchange::convert_date(std::string const &date)
{
	std::string		sub[3];

	sub[0] = date.substr(0, 4);
	sub[1] = date.substr(5, 2);
	sub[2] = date.substr(8, 2);

	tm d = {};

	d.tm_year = std::atoi(sub[0].c_str());
	d.tm_mon = std::atoi(sub[1].c_str());
	d.tm_mday = std::atoi(sub[2].c_str());

	time_t	t = mktime(&d);
	return (t);
}

void	BitcoinExchange::calculate(time_t timedate, float &amount, std::string date_str)
{
	std::map<std::string, float>::iterator begin = _database.begin();
	std::map<std::string, float>::iterator end = _database.end();
	std::map<std::string, float>::iterator it;

	time_t	data_date;
	while (begin != end)
	{
		data_date = convert_date(begin->first);
		if (data_date == timedate)
		{
			std::cout << begin->first << " => " << amount << " => " << amount * begin->second << "\n";
			break ;
		}
		else if (data_date > timedate)
		{
			it = _database.lower_bound(date_str);
			if (it == _database.end())
				it--;
			std::cout << date_str << " => " << amount << " => " << amount * it->second << "\n";
			break ;
		}
		begin++;
	}
}

int BitcoinExchange::is_digit(char s)
{
	if (s < '0' || s > '9')
		return (0);
	return (1);
}

bool	BitcoinExchange::bad_input(std::string const &line)
{
	std::size_t	pipe = line.find('|');
	std::string	date;
	size_t		i = 0;
	time_t		valid_date;

	if (pipe == std::string::npos || pipe != line.rfind('|'))
		return false;
	date = line.substr(0, pipe- 1);
	if (date.length() != 10)
		return false;
	while (i < date.length())
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else if (!is_digit(date[i]))
			return false;
		i++;
	}
	date = line.substr(0, pipe - 1);
	valid_date = convert_date(date);
	if (valid_date == -1)
		return false;
	return true;
}

void	BitcoinExchange::read_line(std::string const& line)
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
		std::cout << "Error: number too high\n";
		return ;
	}
	date = line.substr(0, pipe -1);
	valid_date = convert_date(date);
	calculate(valid_date, amount, date);
}

void	BitcoinExchange::read_input(std::ifstream &file)
{
	std::string	line;

	getline(file, line);
	while (getline(file, line))
		read_line(line);
}

bool	BitcoinExchange::check_file(std::ifstream &file, std::string const &input)
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
		return (false);
	return (true);
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

