/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:20:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/02 00:25:24 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void) {}

void	HumanB::attact(void)
{
	if (this->_weapon == NULL)
		std::cout << BCYN << this->_name << BRED" don't have weapon\n" << RESET;
	else
		std::cout << BCYN << this->_name << BMAG" attacts with their " << (*this->_weapon).getType() << RESET << std::endl;
}