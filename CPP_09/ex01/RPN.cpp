/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:43:17 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/27 20:48:57 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void    RPN::calculate(std::String input)
{
    std::stringstream ss(input);
    std::string num;
    int         top1, tops2;

    while(std::getline(ss, num, ' '))
    {
        
    }
}

void    RPN::run(std::string input)
{
    calculate(input);
    if (this->_stack.size() != 1)
        throw ErrorInput()
    std::cout << This->_stack.top() << std::endl;
}

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
