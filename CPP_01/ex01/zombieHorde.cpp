/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:17:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/15 21:40:46 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* ZomH = new Zombie[N];
	for (int i = 0; i < N; i++)
		ZomH[i].setName(name);
	return ZomH;
}