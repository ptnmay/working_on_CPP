/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:15:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:17:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
		protected:
				std::string type;
		public:
				Cat();
				~Cat();
				Cat(Cat const &other);
				Cat &operator=(Cat const &cpy);
				
				void makeSound() const;
};

#endif