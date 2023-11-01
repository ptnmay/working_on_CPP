/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:34:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/02 01:33:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;

	std::cout << "\n=========================================" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	wrong_cat->makeSound();
	wrong_meta->makeSound();
	
	std::cout << std::endl;
	delete wrong_meta;
	delete wrong_cat;
	return 0;
}



// #include <iostream>

// class SampleBase {
// 	public:
// 		SampleBase() {};
// 		~SampleBase() {};
// 		 void makeSound();
// };

// void SampleBase::makeSound() {
// 			std::cout << "Base" << std::endl;
// 		};

// class Derievd: public SampleBase {
// 	public:
// 		Derievd() {};
// 		~Derievd() {};
// 		 void makeSound();
		
// };

// void Derievd::makeSound() {
// 			std::cout << "Derived" << std::endl;
// 		}


// int main(void)
// {
// 	SampleBase *base = new Derievd();
// 	Derievd derived;

// 	base->makeSound();
// 	derived.makeSound();
// }