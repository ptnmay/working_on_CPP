/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:04:08 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/07 23:25:17 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array() {
	_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n];
}

template<typename T>
Array<T>::Array(Array const &other) {
	*this = other;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &other) {
	if (this != &other) {
		_size = other.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete [] _array;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i >= _size) {
		throw OutOfRangeException();
	}
	return _array[i];
}

template<typename T>
unsigned int	Array<T>::size() const {
	return _size;
}

template<typename T>
const char	*Array<T>::OutOfRangeException::what() const throw() {
	return "Out of range";
}

#endif
