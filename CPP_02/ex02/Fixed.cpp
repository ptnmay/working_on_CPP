/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:44:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 15:42:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixp = 0;
	std::cout << BGRN"Default constructor called\n" << RESET;
}

Fixed::Fixed(const int num)
{
	this->fixp = num << bits;
	std::cout << BGRN"Int constructor called\n" << RESET;
}

Fixed::Fixed(const float num)
{
	this->fixp = roundf(num * 256);
	std::cout << BGRN"Float constructor called\n" << RESET;
}

Fixed::~Fixed()
{
	std::cout << BRED"Destructor called\n" << RESET;
}

Fixed::Fixed(Fixed const &Fixcpy)
{
	std::cout << BMAG"Copy constructor called\n" << RESET;
	this->fixp = Fixcpy.fixp;
}

Fixed &		Fixed::operator = (Fixed const &Fixcp)
{
	if (this != &Fixcp)
	{
		this->fixp = Fixcp.fixp;
		std::cout << BCYN"Copy assignment operator called\n" << RESET;
	}
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixp = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << BYEL"getRawBits member function called\n" << RESET;
	return this->fixp;
}

float Fixed::toFloat(void) const
{
	return (float(this->fixp) / 256);
}

int	Fixed::toInt(void) const
{
	return (this->fixp >> bits);
}

std::ostream&	operator<<(std::ostream& print, Fixed const& show)
{
	print << show.toFloat();
	return print;
}

bool	Fixed::operator>(Fixed const& cmp) const
{
	if (cmp.fixp > fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator>=(Fixed const& cmp) const
{
	if (cmp.fixp >= fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator<(Fixed const& cmp) const
{
	if (cmp.fixp < fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator<=(Fixed const& cmp) const
{
	if (cmp.fixp <= fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator==(Fixed const& cmp) const
{
	if (cmp.fixp == fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator!=(Fixed const& cmp) const
{
	if (cmp.fixp != fixp)
		return true;
	else
		return false;
}


