/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:00:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 16:27:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
		public:
				ScavTrap();
				~ScavTrap();
				ScavTrap(ScavTrap const &STcpy);
				ScavTrap(std::string const name);
				ScavTrap & operator = (ScavTrap const &STcpy);
				
				void guardGate();
};

#endif