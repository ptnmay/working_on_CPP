/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:15:24 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 00:11:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixp = 0;
	std::cout << BGRN"Default constructor called\n" << RESET;
}

Fixed::~Fixed()
{
	std::cout << BRED"Destructor called\n" << RESET;
}

Fixed::Fixed(Fixed const &Fixcpy)
{
	std::cout << BMAG"Copy constructor called\n" << RESET;
	fixp = Fixcpy.fixp;
}

Fixed &		Fixed::operator = (Fixed const &Fixcp)
{
	if (this != &Fixcp)
	{
		fixp = Fixcp.fixp;
		std::cout << BCYN"Copy assignment operator called\n" << RESET;
	}
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	fixp = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << BYEL"getRawBits member function called\n" << RESET;
	return fixp;
}

