/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:00:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 03:40:56 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << BCYN"ScavTrap Destructor Called.\n" << RESET;
}

ScavTrap::ScavTrap(ScavTrap const &STcpy) : ClapTrap(STcpy)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoint = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << BMAG"ScavTrap Constructor Called" << std::endl;
	std::cout << RESET;
}

ScavTrap & ScavTrap::operator= (ScavTrap const &STcpy)
{
	if (this != &STcpy)
		ClapTrap::operator=(STcpy);
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << BCYN"\n~~~hello from guardGate~~~\n\n" << RESET;
}
