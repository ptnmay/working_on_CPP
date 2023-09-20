/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:49:26 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/21 00:55:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *somezom;

	std::cout << BCYN;
	somezom = newZombie("Mai");
	somezom->announce();
	
	std::cout << BMAG;
	randomChump("Me");
	std::cout << RESET;
}