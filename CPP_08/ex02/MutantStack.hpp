/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 23:08:49 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/13 05:25:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

template<class T>
class MutantStack : public std::stack<T>
{
	public:
			~MutantStack() {}
			MutantStack() {}
			MutantStack(MutantStack const& other) {*this = other;}
			MutantStack& operator=(MutantStack const& cpy) {
				if (this != &cpy) {
					std::stack<T>::operator=(cpy);
				}
				return *this;}

			typedef typename std::stack<T>::container_type::iterator iter;

			iter begin() { return std::stack<T>::c.begin(); }
			iter end() { return std::stack<T>::c.end(); }
			
};

#endif