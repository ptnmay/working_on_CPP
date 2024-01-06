/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 23:36:00 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/07 06:37:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

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

template <typename T>
void iter(T *array, size_t len, void (*f)(T &)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

//in case const
template <typename T, typename H>
void iter(T *array, size_t len, void (*f)(H &)) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

//print in main
template< typename T >
void print( T& x )
{
	std::cout << BMAG << x << RESET << std::endl;
	return;
}

#endif
