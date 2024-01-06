/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:47:59 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/06 23:32:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << BMAG << "a = " << a << ", b = " << b << RESET << std::endl;
	std::cout << BMAG << "min( a, b ) = " << ::min( a, b ) << RESET << std::endl;
	std::cout << BMAG << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << BGRN << "c = " << c << ", d = " << d << std::endl;
	std::cout << BGRN << "min( c, d ) = " << ::min( c, d ) << RESET << std::endl;
	std::cout << BGRN << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;

	return 0;
}
