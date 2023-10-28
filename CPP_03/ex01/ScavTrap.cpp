/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:00:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/29 02:52:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called\n";
}

ScavTrap::~ScavTrap()
{
	// std::cout << BCYN"ScavTrap Destructor Called.\n" << RESET;
}

ScavTrap::ScavTrap(ScavTrap const &STcpy) : ClapTrap(STcpy)
{
	// std::cout << "ScavTrap Copy Constructor Called" << std::endl;
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

void	ScavTrap::attack(std::string target)
{
	if (this->_hitpoint <= 0)
		std::cout << BRED << this->_name << " : is dead. no more hit point." << RESET;
	std::cout << BYEL;
	if (this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << "ScavTrap : " << this->_name << " attack " << target;
		std::cout << ". with " << this->_attack << " point of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " not enough energy\n";
	std::cout << BCYN;
	std::cout << this->_name << " : hit point = " << this->_hitpoint << std::endl;
	std::cout << this->_name << " : energy point = " << this->_energy << std::endl;
	std::cout << this->_name << " : attack damage point = " << this->_attack << std::endl;
	std::cout << BWHT;
	std::cout << "---------------------------------------------------\n";
	std::cout << RESET;
}

void	ScavTrap::guardGate()
{
	std::cout << BMAG"\n~~~hello from guardGate~~~\n\n" << RESET;
}
