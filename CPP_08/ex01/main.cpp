/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:09:14 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/12 05:44:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test_random()
{
    try
    {
        std::srand(std::time(0));
        unsigned int max = 10 + (rand() % 5);
        Span sp(max);
        for (unsigned int i = 0; i < max; i++)
            sp.addNumber(rand() % 1000);
        sp.print();
		std::cout << BMAG << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << BCYN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << BRED << "Exception : " << e.what() << std::endl;
    }
}

void test_subject()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << BMAG << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << BCYN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
}

void test_error()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(1);
		std::cout << BMAG << "Shortest Span: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << BCYN << "Longest Span: " << sp.longestSpan() << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(71);
		sp.addNumber(21);
		sp.addNumber(143);
		sp.addNumber(166);
		sp.addNumber(13);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
}

int main()
{
	test_random();
	std::cout << "======================\n";
	test_subject();
	std::cout << "======================\n";
	test_error();
	return 0;
}