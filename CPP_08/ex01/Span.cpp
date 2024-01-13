/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:09:08 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/13 22:11:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N)
{}

Span::~Span()
{}

Span::Span(Span const& other)
{
	*this = other;
}

Span& Span::operator=(Span const& cpy)
{
	if (this != &cpy)
	{
		this->_size = cpy._size;
		this->_vec = cpy._vec;
	}
	return *this;
}

void	Span::checkError(int add) const
{
	for (unsigned int i = 0; i + 1 < _vec.size(); i++)
	{
		if (std::find(_vec.begin(), _vec.end(), add) != _vec.end())
			throw Span::SameNumException();
	}
}

void	Span::addNumber(int add)
{
	checkError(add);
	if (_vec.size() >= _size)
		throw Span::StoreageFullException();
	_vec.push_back(add);
}

void	Span::addNum(std::vector<int>::iterator const& begin, std::vector<int>::iterator const& end)
{
	if ((std::distance(begin, end) + _vec.size()) > _size)
	{
		throw Span::StoreageFullException();
	}
	std::vector<int>::iterator cur = begin;
	while (cur != end) {
		try
		{
			if (std::find(_vec.begin(), _vec.end(), *cur) == _vec.end()) {
				_vec.push_back(*cur);
			}
			else
			{
				throw Span::SameNumException();
			}
		} catch (std::exception &e)
		{
			std::cout << BRED << "addNum: " << e.what() << RESET << std::endl;
		}
		cur++;
	}
}

unsigned int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw Span::CannotSpanException();
	std::vector<int>::iterator first = _vec.begin();
	std::vector<int>::iterator last = _vec.end();
	unsigned int min = UINT_MAX;
	unsigned int tmp;

	std::sort(first, last);
	std::vector<int>::iterator next = first + 1;
	while (next != last)
	{
		tmp = *next - *first;
		if (tmp < min)
			min = tmp;
		first++;
		next++;
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw Span::CannotSpanException();
	std::vector<int>::iterator first = _vec.begin();
	std::vector<int>::iterator last = _vec.end();
	unsigned int max = 0;
	std::sort(first, last);
	max = *(last - 1) - *first;
	return max;
}

void Span::print()
{
    std::vector<int>::const_iterator it;
	std::cout << "[ ";
	for (it = _vec.begin(); it != _vec.end(); it++)
		std::cout << BYEL << *it << " ";
	std::cout << RESET << "]" << std::endl;
}