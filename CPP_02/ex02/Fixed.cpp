/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:44:14 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 22:50:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixp = 0;
}

Fixed::Fixed(const int num)
{
	this->fixp = num << bits;
}

Fixed::Fixed(const float num)
{
	this->fixp = roundf(num * 256);
}

Fixed::~Fixed()
{}

Fixed::Fixed(Fixed const &Fixcpy)
{
	this->fixp = Fixcpy.fixp;
}

Fixed &		Fixed::operator = (Fixed const &Fixcp)
{
	if (this != &Fixcp)
		this->fixp = Fixcp.fixp;
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixp = raw;
}

int		Fixed::getRawBits(void) const
{
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

//compare

std::ostream&	operator<<(std::ostream& print, Fixed const& show)
{
	print << show.toFloat();
	return print;
}

bool	Fixed::operator>(Fixed const& cmp) const
{
	if (fixp > cmp.fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator>=(Fixed const& cmp) const
{
	if (fixp >= cmp.fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator<(Fixed const& cmp) const
{
	if (fixp < cmp.fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator<=(Fixed const& cmp) const
{
	if (fixp <= cmp.fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator==(Fixed const& cmp) const
{
	if (fixp == cmp.fixp)
		return true;
	else
		return false;
}
bool	Fixed::operator!=(Fixed const& cmp) const
{
	if (fixp != cmp.fixp)
		return true;
	else
		return false;
}

//arithmetic

Fixed 		Fixed::operator + (Fixed const &Fixcp) const
{
	return Fixed(this->toFloat() + Fixcp.toFloat());
}
Fixed 		Fixed::operator - (Fixed const &Fixcp) const
{
	return Fixed(this->toFloat() - Fixcp.toFloat());
}
Fixed 		Fixed::operator * (Fixed const &Fixcp) const
{
	return Fixed(this->toFloat() * Fixcp.toFloat());
}
Fixed 		Fixed::operator / (Fixed const &Fixcp) const
{
	return Fixed(this->toFloat() / Fixcp.toFloat());
}

//increment decrement

Fixed	& Fixed::operator++(void)
{
	++this->fixp;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++this->fixp;
	return tmp;
}
Fixed	& Fixed::operator--(void)
{
	--this->fixp;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--this->fixp;
	return tmp;
}

// Fixed 		Fixed::operator + (Fixed const &Fixcp) const
// {
// 	Fixed result;
// 	result.setRawBits(this->fixp + Fixcp.getRawBits());
	
// 	return result;
// }

//min max
Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}
Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return a;
	return b;
}
Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a <= b)
		return b;
	return a;
}
Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return b;
	return a;
}
