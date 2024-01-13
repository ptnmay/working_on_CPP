/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:49:21 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/13 22:26:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int	n[10] = {2, 14, 60, 17, 43, 1, 68, 70, 83, 9};

	std::cout << BMAG << "All number in array: ";
	for (int i = 0; i < 10; i++) {
		std::cout << n[i] << " ";
	}
	std::cout << RESET << std::endl;

	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(n[i]);
	}
	try {
		std::cout << BCYN << "SEARCH: " << 43 << std::endl;
		easyfind(vec, 43);
		std::cout << BGRN << "FOUND IT\n" << RESET;
		std::cout << BCYN << "SEARCH: " << 99 << std::endl;
		easyfind(vec, 99);
		std::cout << BGRN << "FOUND IT\n" << RESET;
	}
	catch (std::exception& e) {
		std::cout << BRED << e.what() << RESET << std::endl;
	}

	return 0;
}