/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_d0.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 04:20:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/03 05:40:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

int	main()
{
	std:: string txt = "123456789\n";
	std:: cout << "length of txt is: " << txt.length() << std::endl; //idk .length norm ok || not
	std:: cout << "txt is: " << txt;
	std:: cout << "------------------\n";

	std:: string fullName;
	std:: cout << "Type your full name: ";
	std:: getline(std:: cin, fullName);
	std:: cout << "Your name is: " << fullName <<std:: endl;
	std:: cout << "------------------\n";
	
	std:: cout << "1 < 2 is " << (1 < 2) << std:: endl;
	std:: cout << "11 < 2 is " << (11 < 2) << std:: endl;
	std:: cout << "------------------\n";

	//else if short
	int time = 20;
	std:: string result = (time < 18) ? "Good day.\n" : "Good evening.\n";
	std:: cout << result;
	std:: cout << "------------------\n";

	
	return (0);
}
