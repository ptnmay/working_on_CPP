/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:26:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 16:52:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	// std::cout << "FragTrap Constructor called\n";
}

FragTrap::~FragTrap()
{
	// std::cout << BCYN"FragTrap Destructor Called.\n" << RESET;
}

FragTrap::FragTrap(FragTrap const &STcpy) : ClapTrap(STcpy)
{
	// std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoint = 100;
	this->_energy = 100;
	this->_attack = 30;
	// std::cout << BMAG"FragTrap Constructor Called" << std::endl;
	// std::cout << RESET;
}

FragTrap & FragTrap::operator= (FragTrap const &STcpy)
{
	if (this != &STcpy)
		ClapTrap::operator=(STcpy);
	return *this;
}

void	FragTrap:: highFivesGuys()
{
	std::cout << BCYN"\n~~~hello from  highFivesGuys~~~\n\n" << RESET;
}
