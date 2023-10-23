/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:43:49 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 22:47:34 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main()
// {
// 	Fixed const a(12);
// 	Fixed const b(12);

// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	// if (a < b)
// 	// 	std::cout << "a < less than b\n";
// 	// if (a > b)
// 	// 	std::cout << "a > more than b\n";
// 	// if (a >= b)
// 	// 	std::cout << "a >= more or equal b\n";
// 	// if (a <= b)
// 	// 	std::cout << "a <= less or equal b\n";
// 	// if (a == b)
// 	// 	std::cout << "a == equal b\n";
// 	// if (a != b)
// 	// 	std::cout << "a != not equal b\n";
// 	std::cout << "a + b == " << a + b << std::endl;
// 	std::cout << "a - b == " << a - b << std::endl;
// 	std::cout << "a * b == " << a * b << std::endl;
// 	std::cout << "a / b == " << a / b << std::endl;
// 	return 0;
// }

//subject main
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
