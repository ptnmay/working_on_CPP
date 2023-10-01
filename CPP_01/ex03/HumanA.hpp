/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:51:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/02 00:07:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon*		_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attact(void);
};

#endif