/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:50:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 04:15:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << BCYN"| Dog | Constructor called\n" << RESET;
	this->type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << BCYN"| Dog | Destructor called\n" << RESET;
	delete _brain;
}

Dog::Dog(Dog const &other)
{
	std::cout << BCYN"| Dog | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Dog & Dog::operator=(Dog const &cpy)
{
	std::cout << BCYN"| Dog | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << BCYN"Woof woof!\n" << RESET;
}
