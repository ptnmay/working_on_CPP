/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:35:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:17:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
		protected:
				std::string type;
		public:
				WrongCat();
				~WrongCat();
				WrongCat(WrongCat const &other);
				WrongCat &operator=(WrongCat const &cpy);
				
				void makeSound() const;
};

#endif