/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:43:17 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/28 04:38:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void    RPN::calculate(std::string input)
{
    std::stringstream ss(input);
    std::string num;
    int         top1;
    int         top2;

    while(std::getline(ss, num, ' '))
    {
        if (num.length() > 1 || isalpha(num[0]))
            throw ErrorInput();
        if (num.length() == 1 && isdigit(num[0]))
            this->_stack.push(atoi(num.c_str()));
        switch (num[0])
        {
            case '+':
                if (this->_stack.size() < 2)
                    throw ErrorInput();
                top1 = this->_stack.top();
                this->_stack.pop();
                top2 = this->_stack.top();
                this->_stack.pop();
                this->_stack.push(top1 + top2);
                break ;
            case '-':
                if (this->_stack.size() < 2)
                    throw ErrorInput();
                top1 = this->_stack.top();
                this->_stack.pop();
                top2 = this->_stack.top();
                this->_stack.pop();
                this->_stack.push(top2 - top1);
                break ;
            case '*':
                if (this->_stack.size() < 2)
                    throw ErrorInput();
                top1 = this->_stack.top();
                this->_stack.pop();
                top2 = this->_stack.top();
                this->_stack.pop();
                this->_stack.push(top1 * top2);
                break ;
            case '/':
                if (this->_stack.size() < 2)
                    throw ErrorInput();
                top1 = this->_stack.top();
                this->_stack.pop();
                top2 = this->_stack.top();
                this->_stack.pop();
                if (top1 == 0)
                    throw ErrorInput();
                this->_stack.push(top2 / top1);
                break ;
        }
    }
}

void    RPN::run(std::string input)
{
    calculate(input);
    if (this->_stack.size() != 1)
        throw ErrorInput();
    std::cout << this->_stack.top() << std::endl;
}

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &other)
{
    *this = other;
}

RPN& RPN::operator=(RPN const &cp)
{
    if (this != &cp)
        this->_stack = cp._stack;
    return (*this);
}
