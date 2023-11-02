/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:50:30 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:15:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
		private:
				Brain* _brain;
		public:
				Dog();
				~Dog();
				Dog(Dog const &other);
				Dog &operator=(Dog const &cpy);
				
				void makeSound() const;
				void	setIdeas(int i, std::string idea);
				std::string	getIdeas(int i) const;
};

#endif