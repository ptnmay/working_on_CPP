/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:13:56 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 01:46:46 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

//mos teach
// class Student
// {
// 	public:
// 		std::string name;
// 		std::string surname;
// 		int			grade;
// };

// std::ostream&	operator<<(std::ostream&  o, Student const & var)
// {
// 	o << var.name;
// 	o << " ";
// 	o << var.grade;
// 	return o;
// }

// int	main(void)
// {
// 	int	a = 20;
	
// 	std::cout << a << std::endl;

// 	Student	var;

// 	var.name = "Muay";
// 	var.surname = "42bkk";
// 	var.grade = 3;
// 	std::cout << var << std::endl;
// 	return 0;
// }
