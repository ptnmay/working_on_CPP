/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:47:10 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/29 02:53:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const &CTcpy)
{
	this->_name = CTcpy._name;
	this->_hitpoint = CTcpy._hitpoint;
	this->_attack = CTcpy._hitpoint;
	this->_energy = CTcpy._energy;
	// std::cout << BCYN"ClapTrap Copy Constructor Called" << RESET << std::endl;
}

ClapTrap &	ClapTrap::operator = (ClapTrap const &CTcpy)
{
	if (this != &CTcpy)
	{
		this->_name = CTcpy._name;
		this->_hitpoint = CTcpy._hitpoint;
		this->_attack = CTcpy._hitpoint;
		this->_energy = CTcpy._energy;
	}
	return *this;
}

ClapTrap::ClapTrap()
{
	// std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::ClapTrap(std::string const name)
{
	this->_name = name;
	this->_hitpoint = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::~ClapTrap(void)
{
	// std::cout << BMAG"ClapTrap Destructor Called.\n" << RESET;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << BYEL;
	if (this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attack << " point of damage!" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BRED;
	this->_hitpoint -= amount;
	std::cout << this->_name;
	std::cout << " : hit point after take Damage = " << this->_hitpoint << std::endl;	std::cout << BCYN;
	std::cout << this->_name << " : hit point = " << this->_hitpoint << std::endl;
	std::cout << this->_name << " : energy point = " << this->_energy << std::endl;
	std::cout << this->_name << " : attack damage point = " << this->_attack << std::endl;
	std::cout << BWHT;
	std::cout << "---------------------------------------------------\n";
	std::cout << RESET;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BGRN;
	if (this->_energy > 0)
	{
		this->_energy -= 1;
		this->_hitpoint += amount;
		std::cout << this->_name << " : got repair " << amount << " point. " << this->_hitpoint << " hit points left\n";
	}
	else
	{
		std::cout << this->_name;
		std::cout << " Energy " << this->_energy << " is not enough to get repair.\n";
	}
	std::cout << BCYN;
	std::cout << this->_name << " : hit point = " << this->_hitpoint << std::endl;
	std::cout << this->_name << " : energy point = " << this->_energy << std::endl;
	std::cout << this->_name << " : attack damage point = " << this->_attack << std::endl;
	std::cout << BWHT;
	std::cout << "---------------------------------------------------\n";
	std::cout << RESET;
}