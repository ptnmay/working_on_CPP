/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:50:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 02:58:52 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
		private:
				Brain* _brain;
		public:
				Dog();
				~Dog();
				Dog(Dog const &other);
				Dog &operator=(Dog const &cpy);
				
				void makeSound() const;
};

#endif