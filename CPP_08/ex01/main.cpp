/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:09:14 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/12 23:05:25 by psaeyang         ###   ########.fr       */
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

void test_addnum()
{
	int	arr[20] = { 6,23,6345,87,22,1,3,4 };
	
	Span	sp(20);

	std::vector<int> vec;

	try
	{
        sp.print();
		sp.addNum(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << BRED << e.what() << '\n' << RESET;
	}
}

void test1()
{
    std::cout << BMAG << "\n---- TEST 1 ----" << RESET << std::endl;
	std::cout << BYEL << "case : random and addRange" << RESET << std::endl;
    try
    {
        std::srand(std::time(0));
        unsigned int max = 30;
        int size = 15; // for add more by range
        Span arr(max);
        for (unsigned int i = 0; i < max - size; i++)
            arr.addNumber(rand() % 1000);
        arr.print();
        
        std::vector<int> newArr(size);
        for (int i = 0; i < size; i++)
            newArr[i] = rand() % 1000;
        arr.addNum(newArr.begin(), newArr.end());
        arr.print();
        std::cout << "Longest Span  : "<< arr.longestSpan() << std::endl;
        std::cout << "Shortest Span : "<< arr.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << BRED << "Exception : " << e.what() << std::endl;
    }
}

int main()
{
	test_random();
	std::cout << "======================\n";
	test_subject();
	std::cout << "======================\n";
	test_error();
	std::cout << "======================\n";
	// test_addnum();
	test1();
	return 0;
}