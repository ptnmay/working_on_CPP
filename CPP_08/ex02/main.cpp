/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:29:35 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/13 22:29:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void test_main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << BGRN << "TOP: " << mstack.top() << RESET << std::endl;
	
	mstack.pop();
	
	std::cout << BCYN << "SIZE: " << mstack.size() << RESET << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iter it = mstack.begin();
	MutantStack<int>::iter ite = mstack.end();
	
	std::cout << BWHT << "--------------" << std::endl;
	++it;
	std::cout << BYEL << "++it : " << *it << std::endl;
	--it;
	std::cout << "--it : " << *it << RESET << std::endl;
	
	
	std::cout << BMAG << "print all element in stack" << std::endl;
	while (it != ite)
	{
		std::cout << BCYN << *it << RESET << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
}

void	test0()
{
	std::cout << BWHT"--------------\n";
	{
		MutantStack<int> st;

		st.push(1);
		st.push(2);
		st.push(3);
		MutantStack<int>::iter	it = st.begin();
		std::cout << BGRN"begin: " << *it << std::endl;
		it = st.end();
		it--;
		std::cout << BMAG"end: " << *it << std::endl;
		st.pop();
		it = st.end();
		it--;
		std::cout << BCYN"end after pop: " << *it << RESET << std::endl;
	}
}
int main()
{
	test_main();
	test0();
	return 0;
}
