/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:05:04 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/27 00:38:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
		ShrubberyCreationForm();
	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& cpy);

		void execute(Bureaucrat const & executor) const;
		
		class CannotOpenException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Can't open file");
				}
		};
};

#define ASCII_TREES "\
       ....                             \n\
    .=**+===:.                          \n\
   :***=======.                         \n\
   +**+=======-          ...            \n\
   -**+=======:    :::-+*++==-====:.    \n\
  :***+=======-  :*****+=============-. \n\
  ***==========- +***+=================.\n\
 .**+==========- :***==================.\n\
 .+*+==========-  ***==================:\n\
 +**+===*=======: ***+=======*=========-\n\
.***====#*+=====- :***+======#++======-.\n\
 +**====##======:  .-+***++++#*====-:.  \n\
 :**+==*#*=====-        ..::+#+:::.     \n\
  .=*+=+##===-.             =#*         \n\
     .-*##-..               +##.        \n\
       +**:                 ***:        "

#endif