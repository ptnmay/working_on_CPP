/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:10:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:23:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << BWHT"| Animal | Constructor called\n" << RESET;
}

Animal::~Animal()
{
	std::cout << BWHT"| Animal | Destructor called\n" << RESET;
}

Animal::Animal(Animal const &other)
{
	std::cout << BWHT"| Animal | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Animal & Animal::operator=(Animal const &cpy)
{
	std::cout << BWHT"| Animal | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << BRED"Unknown sound from Animal\n" << RESET;
}
