/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:35:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/01 05:44:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << BWHT"| WrongCat | Constructor called\n" << RESET;
}

WrongCat::~WrongCat()
{
	std::cout << BWHT"| WrongCat | Destructor called\n" << RESET;
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << BWHT"| WrongCat | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

WrongCat & WrongCat::operator=(WrongCat const &cpy)
{
	std::cout << BWHT"| WrongCat | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << BRED"Unknown sound from WrongCat\n" << RESET;
}
