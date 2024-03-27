/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:43:17 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/27 18:55:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"



RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &other)
{
    *this = other
}

RPN& RPN::operator=(RPN const &cp)
{
    if (this != cp)
        this->_stack = cp._stack;
    return (*this);
}
