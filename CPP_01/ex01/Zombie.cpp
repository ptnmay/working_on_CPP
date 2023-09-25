/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:32:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/26 03:03:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(std::string name)
// {
// 	this->name = name;
// }

// Zombie::~Zombie()
// {
// 	std::cout << BRED"Zombie has been destroy\n";
// }

void	Zombie::announce()
{
	std::cout << BCYN;
	std::cout << name << BGRN": BraiiiiiiinnnzzzZ...\n" << RESET;
}