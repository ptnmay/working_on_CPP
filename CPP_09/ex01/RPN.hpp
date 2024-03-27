/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:44:44 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/27 20:25:48 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <exception>
# include <cstdlib>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"


class RPN
{
	private:
			std::stack<int> _stack;
	public :
			~RPN();
			RPN();
			RPN(RPN const& other);
			RPN& operator=(RPN const &cp);

			void	run(std::string input);
			void	calculate(std::string input);
	class ErrorInput : public std::exception
	{
		public:
			virtual const char* what() const throw()
				return (BRED"Error: incorrect input");
	};
};


#endif