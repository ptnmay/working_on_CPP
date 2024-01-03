/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:19:31 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/04 01:31:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

# include <stdlib.h>
# include <cstdlib>
# include <iostream>
# include <limits>
# include <sstream>
# include <iomanip>

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const& other);
		ScalarConverter&	operator=(ScalarConverter const& cpy);

		static void convert(char *av);
		static void convertChar(double av);
		static void convertInt(double av);
		static void convertFloat(double av);
		static void convertDouble(double av);
};

#endif