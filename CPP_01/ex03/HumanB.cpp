/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:20:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/02 04:28:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << BCYN << this->_name << BRED" don't have weapon\n" << RESET;
	else
		std::cout << BCYN << this->_name << BMAG" attacts with their " << RESET << BYEL << (*this->_weapon).getType() << RESET << std::endl;
}