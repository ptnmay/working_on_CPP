/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:16:55 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 02:52:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Brain
{
		private:
				std::string ideas[100];
		public:
				Brain();
				~Brain();
				Brain(Brain const &other);
				Brain &operator=(Brain const &cpy);

				
				
};

#endif