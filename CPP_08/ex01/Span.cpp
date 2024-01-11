/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:09:08 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/11 19:52:16 by psaeyang         ###   ########.fr       */
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
	// if (_vec.empty() || _vec.size() == 1)
	// 	throw Span::CannotSpanException();
}

void	Span::addNumber(int add)
{
	checkError(add);
	if (_vec.size() >= _size)
		throw Span::StoreageFullException();
	_vec.push_back(add);
}
