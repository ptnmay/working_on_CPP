/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:39:26 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/26 03:00:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zoms = zombieHorde(5, "Mavis");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Zom[" << i + 1 << "]: ";
		zoms[i].announce();
	}
	delete[] zoms;
	return 0;
}