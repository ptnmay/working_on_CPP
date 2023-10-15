/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:39:26 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/15 21:35:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	std::string name = "mavis";
	Zombie *zoms = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		std::cout << BMAG"Zom[" << i + 1 << "]: ";
		zoms[i].announce();
	}
	delete[] zoms;
	return 0;
}