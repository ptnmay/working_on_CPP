/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:50:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:02:45 by psaeyang         ###   ########.fr       */
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
	_brain = new Brain();
	if (this != &cpy)
	{
		this->type = cpy.type;
		for (int i = 0; i < 100; i++)
			this->_brain[i] = cpy._brain[i];
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << BCYN"Woof woof!\n" << RESET;
}

void	Dog::setIdeas(int i, std::string idea)
{
	this->_brain->setIdeas(i, idea);
}

std::string	Dog::getIdeas(int i) const
{
	return (this->_brain->getIdeas(i));
}
