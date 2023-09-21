/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:49:26 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/22 00:06:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *somezom;

	std::cout << BMAG;
	somezom = newZombie("Mai");
	somezom->announce();
	std::cout << BGRN"--------------------------------\n" << RESET;
	std::cout << BCYN;
	randomChump("Me");
	std::cout << RESET;
}