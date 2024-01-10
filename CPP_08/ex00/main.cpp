/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:49:21 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/11 00:00:44 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int	n[10] = {4, 18, 20, 37, 43, 51, 68, 70, 83, 92};

	std::cout << BGRN << "All number in array: ";
	for (int i = 0; i < 10; i++) {
		std::cout << n[i] << " ";
	}
	std::cout << RESET << std::endl << std::endl;

	std::cout << " ---------- VECTOR --------- " << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(n[i]);
	}
	try {
		std::cout << BCYN << "search: " << 43 << std::endl;
		easyfind(vec, 43);
		std::cout << "search: " << 100 << RESET << std::endl;
		easyfind(vec, 100);
	}
	catch (std::exception& e) {
		std::cout << BRED << e.what() << RESET << std::endl;
	}
	vec.clear();
	std::cout << std::endl;

	return 0;
}