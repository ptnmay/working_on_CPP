/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:07:13 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/27 18:42:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& other);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& rhs);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const& executor) const;
};

#endif