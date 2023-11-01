/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:16:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 05:24:34 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BMAG"| Brain | Constructor called\n" << RESET;
}

Brain::~Brain()
{
	std::cout << BMAG"| Brain | Destructor called\n" << RESET;
}

Brain::Brain(Brain const &other)
{
	std::cout << BMAG"| Brain | Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Brain & Brain::operator=(Brain const &cpy)
{
	std::cout << BMAG"| Brain | Assignment Operator Called" << RESET << std::endl;
	if (this != &cpy)
		for (int i = 0; i < 100; i++;)
			this->ideas[i] = cpy.ideas[i];
	return *this;
}
