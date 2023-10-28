/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:26:59 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/28 16:29:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
		public:
				FragTrap();
				~FragTrap();
				FragTrap(FragTrap const &FTcpy);
				FragTrap(std::string const name);
				FragTrap & operator = (FragTrap const &FTcpy);
				
				void  highFivesGuys();
};

#endif