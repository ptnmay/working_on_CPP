/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:07:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/01 03:02:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const _name;
		bool		_sign;
		int const	_signGrade;
		int const	_execGrade;

	public:
		~Form();
		Form(std::string const name, int const signGrade, int const execGrade);
};

#endif