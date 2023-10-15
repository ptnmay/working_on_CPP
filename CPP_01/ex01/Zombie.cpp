/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:32:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/15 21:37:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << BCYN;
	std::cout << name << BGRN": BraiiiiiiinnnzzzZ...\n" << RESET;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}