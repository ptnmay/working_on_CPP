/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:09:10 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/12 22:54:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <map>
# include <deque>
# include <set>
# include <iostream>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class Span
{
	private :
		unsigned int		_size;
		std::vector<int>	_vec;
		
	public :
		~Span();
		Span(unsigned int N);
		Span(Span const& other);
		Span& operator=(Span const& cpy);

		void			print();
		void			checkError(int add) const;
		void			addNum(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		void			addNumber(int add);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	class StoreageFullException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Storage is FULL");
			}
	};
	
	class SameNumException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Can't add same Number");
			}
	};
	
	class CannotSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Can't Span Number");
			}
	};

	
};

#endif