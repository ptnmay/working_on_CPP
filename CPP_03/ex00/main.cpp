/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/29 02:41:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("You");
	ClapTrap	b("I");
	
	a.attack("I");
	b.takeDamage(2);
	b.beRepaired(10);
}