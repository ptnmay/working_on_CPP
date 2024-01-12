/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:29:35 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/13 04:31:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int	main()
// {
// 	MutantStack<int>	mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;
	
// 	mstack.pop();
	
// 	std::cout << mstack.size() << std::endl;
	
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
	
// 	MutantStack<int>::iter it = mstack.begin();
// 	MutantStack<int>::iter ite = mstack.end();
	
// 	std::cout << "TEST ++it and --it " << std::endl;
// 	++it;
// 	std::cout << "++it : " << *it << std::endl;
// 	--it;
// 	std::cout << "--it : " << *it << std::endl;
	
	
// 	std::cout << "print all element in stack" << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// }

int main()
{
	{
		MutantStack<int> st;

		st.push(1);
		st.push(2);
		st.push(3);
		MutantStack<int>::iter	it = st.begin();
		std::cout << "begin " << *it << std::endl;
		it = st.end();
		it--;
		std::cout << "end " << *it << std::endl;
		st.pop();
		it = st.end();
		it--;
		std::cout << "end " << *it << std::endl;
	}
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iter it = mstack.begin();
		MutantStack<int>::iter ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	return 0;
}
