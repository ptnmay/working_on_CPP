/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_d0.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 04:20:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/03 05:02:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std:: string txt = "123456789\n";
	std:: cout << "length of txt is: " << txt.length() << std::endl; //idk .length norm ok || not
	std:: cout << txt;

	std:: string fullName;
	std:: cout << "Type your full name: ";
	std:: getline(std:: cin, fullName);
	std:: cout << "Your name is: " << fullName <<std:: endl;
	return (0);
}
