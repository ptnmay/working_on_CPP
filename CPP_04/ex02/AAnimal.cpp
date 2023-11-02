/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:10:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:14:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << BWHT"| AAnimal | Constructor called\n" << RESET;
}

AAnimal::~AAnimal()
{
	std::cout << BWHT"| AAnimal | Destructor called\n" << RESET;
}

AAnimal::AAnimal(AAnimal const &other)
{
	std::cout << BWHT"| AAnimal | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

AAnimal & AAnimal::operator=(AAnimal const &cpy)
{
	std::cout << BWHT"| AAnimal | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return (type);
}
