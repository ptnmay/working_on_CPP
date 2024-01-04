/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:57:59 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/04 19:14:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data*	data = new Data;
	data->n1 = 42;
	data->n2 = 2.42;

	std::cout << BGRN << "Original Address: " << data << std::endl;
	std::cout << "n1 : " << data->n1 << std::endl;
	std::cout << "n2: " << data->n2 << std::endl;

	uintptr_t	uPtr =  Serializer::serialize(data);
	Data*		dataPtr = Serializer::deserialize(uPtr);

	std::cout << BWHT << "-------------------------------------\n" << RESET;

	std::cout << BMAG << "After deserialize Address: " << dataPtr << std::endl;
	std::cout << "n1 : " << data->n1 << std::endl;
	std::cout << "n2: " << data->n2 << RESET << std::endl;
	delete data;
	return (0);
}