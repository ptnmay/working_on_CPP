/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:15:16 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:17:52 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
		protected:
				std::string type;
		public:
				Dog();
				~Dog();
				Dog(Dog const &other);
				Dog &operator=(Dog const &cpy);
				
				void makeSound() const;
};

#endif