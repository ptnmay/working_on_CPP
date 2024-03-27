/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:36 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/28 04:55:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &other)
{
    *this = other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &cp)
{
    if (this != &cp)
    {
        
    }
    return (*this);
}