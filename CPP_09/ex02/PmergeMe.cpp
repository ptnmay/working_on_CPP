/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:36 by psaeyang          #+#    #+#             */
/*   Updated: 2024/04/03 04:20:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::deleteList(std::list<int> &list, int value)
{
    std::list<int>::iterator it = list.begin();
    while (it != list.end())
    {
        if (*it == value)
        {
            list.erase(it);
            break;
        }
        it++;
    }
}

int PmergeMe::minList(const std::list<int> &list)
{
    std::list<int>::const_iterator it = list.begin();
    int min = *it;
    while (it != list.end())
    {
        if (min > *it)
            min = *it;
        it++;
    }
    return (min);
}

void    PmergeMe::insertList()
{
    int min = 0;
    while (!this->_list.empty())
    {
        min = this->minList(this->_list);
        this->_rslist.push_back(min);
        this->deleteList(this->_list, min);
    }
}

void    PmergeMe::moveList(std::list<int>::iterator &it, int pos)
{
    for (int i = 0; i < pos; i++)
        it++;
}

int PmergeMe::countList(int size)
{
    int res = 0;
    int len = size / 2;
    
    while (len >= 2)
    {
        res++;
        len /= 2;
    }
    return (res);
}

void    PmergeMe::mergeList()
{
    std::list<int>::iterator    left;
    std::list<int>::iterator    right;
    std::list<int>::iterator    templ;
    std::list<int>::iterator    tempr;

    int size = countList(this->_list.size());
    left = right = templ = tempr = this->_list.begin();
    this->moveList(templ, 1);
    this->moveList(right, this->_list.size() / 2);
    this->moveList(tempr, this->_list.size() / 2 + 1);
    for (int i = 0; i < size; i++)
    {
        if (*left > *templ || *right > *tempr)
        {
            if (*left > *templ)
                iter_swap(left, templ);
            if (*right > *tempr)
                iter_swap(right, tempr);
            this->moveList(left, 2);
            this->moveList(templ, 2);
            this->moveList(right, 2);
            this->moveList(tempr, 2);
        }
    }
}

void    PmergeMe::sortList()
{
    clock_t start = clock();
    this->mergeList();
    this->insertList();
    clock_t finish = clock();
    this->_timelist = double(finish - start);
}

void    PmergeMe::printList(const std::list<int> &list)
{
    for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void    PmergeMe::addList(int ac, char **av)
{
    for (int i = 0; i < ac; i++)
    {
        if (atoi(av[i]) < 0)
            throw Negnum();
        _list.push_back(atoi(av[i]));
        _vector.push_back(atoi(av[i]));
    }
    this->_size = _list.size();
}

void    PmergeMe::run(int ac, char **av)
{
    addList(ac - 1, av + 1);
    std::cout << "Before sort: ";
    printList(_list);
    this->sortList();
    // this->sortVec();
    std::cout << "After sort: ";
    printList(_rslist);
    // this->printTime();
}

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