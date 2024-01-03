/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:19:28 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/04 02:17:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const& cpy)
{
	if (this != &cpy) {}
	return (*this);
}

void	ScalarConverter::convert(char *av)
{
	char *endPtr;
	double d = std::strtod(av, &endPtr);
	convertChar(d);
	convertInt(d);
	convertDouble(d);
	convertFloat(d);
}

void	ScalarConverter::convertChar(double d)
{
	char c;
	std::stringstream ss;

	if (isnan(d) == 1)
	{
		std::cout << BRED << "char: impossible\n" << RESET;
		return ;
	}
	if (isprint(d) == 1)
	{
		c = static_cast<char>(d);
		ss << c;
		std::cout << BCYN << "char: " << "'" + ss.str() + "'" << std::endl;
		return ;
	}
	std::cout << BRED << "char: " << "Non displayable\n";
	return ;
}

void	ScalarConverter::convertInt(double d)
{
	if (isnan(d) == 1)
		std::cout << BCYN << "int: impossible\n";
	std::cout << BCYN << "int: " << d << std::endl;
	return ;
}

void	ScalarConverter::convertDouble(double d)
{
	std::cout << BCYN << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return ;
}

void	ScalarConverter::convertFloat(double d)
{
	std::stringstream c;
	c << d;
	if (isnan(d) == 1)
	{
		std::cout << "float: " << c.str() + 'f' << std::endl;
		return ;
	}
	double cast = static_cast<double>(d);
	std::cout << BCYN << "float: " << std::fixed << std::setprecision(1) << cast << 'f' << std::endl;
	return ;
}
