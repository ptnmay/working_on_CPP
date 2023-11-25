/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:05:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/24 23:39:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class Bureaucrat
{
		private:
				std::string const name;
				int	grade;
				Bureaucrat();
		public:
				~Bureaucrat();
				Bureaucrat(std::string n, int g);
				Bureaucrat(Bureaucrat const& other);
				Bureaucrat& operator=(Bureaucrat const& cpy);
				std::string getName() const;
				int 	getGrade() const;
				void	increaseGrade(int amount);
				void	decreaseGrade(int amount);

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

std::ostream& operator<<(std::ostream& print, Bureaucrat const& show);

#endif