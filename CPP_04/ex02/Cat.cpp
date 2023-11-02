/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:49:57 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:08:01 by psaeyang         ###   ########.fr       */
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
	std::cout << BCYN"| Cat | Assignment Operator Called" << RESET << std::endl;
	_brain = new Brain();
	if (this != &cpy)
	{
		this->type = cpy.type;
		for (int i = 0; i < 100; i++)
			this->_brain->setIdeas(i, cpy._brain->getIdeas(i));
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << BMAG"Meow Meow~~\n" << RESET;
}

void	Cat::setIdeas(int i, std::string idea)
{
	_brain->setIdeas(i, idea);
}

std::string	Cat::getIdeas(int i) const
{
	return _brain->getIdeas(i);
}
