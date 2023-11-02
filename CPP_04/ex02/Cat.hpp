/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:50:22 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:15:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{
		private:
				Brain* _brain;
		public:
				Cat();
				~Cat();
				Cat(Cat const &other);
				Cat &operator=(Cat const &cpy);
				
				void makeSound() const;
				void	setIdeas(int i, std::string idea);
				std::string	getIdeas(int i) const;
};

#endif