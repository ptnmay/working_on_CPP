/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:56:49 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/04 20:42:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*  generate(void)
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << BMAG << "p point to: A\n" << RESET;
	else if (dynamic_cast<B*>(p))
		std::cout << BMAG << "p point to: B\n" << RESET;
	else if (dynamic_cast<C*>(p))
		std::cout << BMAG << "p point to: C\n" << RESET;
	else
		std::cout << BYEL << "what is this?\n" << RESET;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << BCYN << "p point to: A\n" << RESET;
	else if (dynamic_cast<B*>(&p))
		std::cout << BCYN << "p point to: B\n" << RESET;
	else if (dynamic_cast<C*>(&p))
		std::cout << BCYN << "p point to: C\n" << RESET;
	else
		std::cout << BYEL << "what is this?\n" << RESET;
}

int main()
{
	Base*	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}