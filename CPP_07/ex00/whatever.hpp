/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:48:25 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/06 23:27:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <typeinfo>
# include <cstdlib>
# include <time.h>
# include <sstream>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

#include <iostream>

template <typename T> void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> T min(const T& a, const T& b) {
    return (b < a ? b : a);
}

template <typename T> T max(const T& a, const T& b) {
    return (a < b ? b : a);
}

#endif
