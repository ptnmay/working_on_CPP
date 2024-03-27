/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:47 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/28 04:46:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

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


class PmergeMe
{
	private:
			std::stack<int> _stack;
	public :
			~PmergeMe();
			PmergeMe();
			PmergeMe(PmergeMe const& other);
			PmergeMe& operator=(PmergeMe const &cp);

	class Negnum : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return (BRED"Error: Negative number");
			}
	};
};


#endif