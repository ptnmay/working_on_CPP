/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:59:25 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/02 04:29:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA:: HumanA(std::string name, Weapon& weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << BCYN << this->_name << BRED" don't have weapon\n" << RESET;
	else
		std::cout << BCYN << this->_name << BMAG" attacts with their " << RESET << BYEL << (*this->_weapon).getType() << RESET << std::endl;
}