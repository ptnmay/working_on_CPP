/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 16:55:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag("Frag");	
	FragTrap	Trap("Trap");	

	Frag.attack("Trap");
	Trap.takeDamage(30);
	Trap.beRepaired(10);
	Frag.highFivesGuys();
	return 0;
}
