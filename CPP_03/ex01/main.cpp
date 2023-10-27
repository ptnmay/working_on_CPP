/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 03:22:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("Robot");
	ClapTrap	ct("Rudeus");

	st.attack("Red Dragon");
	ct.attack("Red Dragon");

	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	return 0;
}