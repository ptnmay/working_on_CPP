/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:34:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/11/01 05:26:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
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