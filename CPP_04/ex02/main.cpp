/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:05:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 19:39:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;

	// TEST BRAIN
	std::cout << "\n=========================================" << std::endl;
	Cat basic;
	for (int i = 0; i < 5; i++)
		basic.setIdeas(i, "food");
	std::cout << "basic before change :" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << i << " = " << basic.getIdeas(i) << std::endl;
	{
		Cat tmp = basic;
		for (int i = 0; i < 5; i++)
			tmp.setIdeas(i, "sleep");
		// TEST PRINT BOTH basic and tmp
		std::cout << "basic:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << i << " = " << basic.getIdeas(i) << std::endl;
		std::cout << "tmp:" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << i << " = " << tmp.getIdeas(i) << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
