/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:27:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 03:01:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Bureaucrat;

class Intern
{
	private:
		std::string _formName[3];

	public:
		Intern();
		~Intern();
		Intern(Intern const& other);
		Intern& operator=(Intern const& cpy);
		AForm*	makeForm(std::string const formName, std::string const targetName) const;
};

#endif
