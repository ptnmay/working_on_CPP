/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:53 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/29 02:21:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("Thor");
	ClapTrap	ct("Loki");

	st.attack("Loki");
	ct.attack("Thor");

	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	return 0;
}