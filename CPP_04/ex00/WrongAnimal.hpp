/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 05:29:58 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:19:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
// # include "WrongCat.hpp"

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class WrongAnimal
{
		protected:
				std::string type;
		public:
				WrongAnimal();
				~WrongAnimal();
				WrongAnimal(WrongAnimal const &other);
				WrongAnimal &operator=(WrongAnimal const &cpy);
				
				std::string getType() const;
				void makeSound() const;
};

#endif