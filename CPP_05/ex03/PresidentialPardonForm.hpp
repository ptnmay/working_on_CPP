/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/27 18:53:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <time.h>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& other);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const& executor) const;
};

#endif