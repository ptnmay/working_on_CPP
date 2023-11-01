/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:49:57 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 05:27:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << BMAG"| Cat | Constructor called\n" << RESET;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << BMAG"| Cat | Destructor called\n" << RESET;
	delete _brain;
}

Cat::Cat(Cat const &other)
{
	std::cout << BMAG"| Cat | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Cat & Cat::operator=(Cat const &cpy)
{
	std::cout << BMAG"| Cat | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BMAG"Meow Meow~~\n" << RESET;
}
