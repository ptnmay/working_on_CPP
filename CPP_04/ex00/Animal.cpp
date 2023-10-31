/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:10:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/01 05:33:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << BWHT"| WrongAnimal | Constructor called\n" << RESET;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BWHT"| WrongAnimal | Destructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << BWHT"| WrongAnimal | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &cpy)
{
	std::cout << BWHT"| WrongAnimal | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << BRED"Unknown sound from WrongAnimal\n" << RESET;
}
