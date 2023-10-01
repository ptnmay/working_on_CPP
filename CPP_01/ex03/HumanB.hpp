/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:20:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/02 00:25:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attact(void);
};

#endif
