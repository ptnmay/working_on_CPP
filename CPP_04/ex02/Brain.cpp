/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:16:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 18:24:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BYEL"| Brain | Constructor called\n" << RESET;
}

Brain::~Brain()
{
	std::cout << BYEL"| Brain | Destructor called\n" << RESET;
}

Brain::Brain(Brain const &other)
{
	std::cout << BYEL"| Brain | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Brain & Brain::operator=(Brain const &cpy)
{
	std::cout << BYEL"| Brain | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	return *this;
}

void	Brain::setIdeas(int i, std::string idea)
{
	this->ideas[i] = idea;
}

std::string	Brain::getIdeas(int i) const
{
	return ideas[i];
}
