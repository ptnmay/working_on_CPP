/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:07:02 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/21 04:02:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool		_sign;
		int const	_signGrade;
		int const	_execGrade;

	public:
		~Form();
		Form(Form const& other);
		Form& operator=(Form const& cpy);
		Form(std::string const name, int const signGrade, int const execGrade);

		std::string	getName() const;
		bool		getSign() const;
		int			getSignG() const;
		int			getSignExec() const;
		
		void		beSigned(Bureaucrat const& bureacrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too Low");
				}
		};
};

std::ostream&	operator<<(std::ostream& print, Form const& show);

#endif
