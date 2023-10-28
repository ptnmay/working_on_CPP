/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:00:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/29 02:30:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class ScavTrap : public ClapTrap
{
		public:
				ScavTrap();
				~ScavTrap();
				ScavTrap(ScavTrap const &STcpy);
				ScavTrap(std::string const name);
				ScavTrap & operator = (ScavTrap const &STcpy);
				
				void attack(std::string target);
				void guardGate();
};

#endif