/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:35 by psaeyang          #+#    #+#             */
/*   Updated: 2023/12/30 02:05:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool		_sign;
		int const	_signGrade;
		int const	_execGrade;

	public:
		~AForm();
		AForm(AForm const& other);
		AForm& operator=(AForm const& cpy);
		AForm(std::string const name, int const signGrade, int const execGrade);

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
		
		class NotSignException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form didn't sign");
				}
		};
	virtual void	execute(Bureaucrat const& executor) const = 0;
};

std::ostream&	operator<<(std::ostream& print, AForm const& show);

#endif
