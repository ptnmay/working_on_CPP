/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:36 by psaeyang          #+#    #+#             */
/*   Updated: 2024/04/09 04:55:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::moveVec(std::vector<int>::iterator &it, int pos)
{
    for (int i = 0; i < pos; i++)
        it++;
}


void    PmergeMe::deleteVec(std::vector<int> &vec, int value)
{
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        if (*it == value)
        {
            vec.erase(it);
            break;
        }
        it++;
    }
}

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

int PmergeMe::minVec(const std::vector<int> &vec)
{
    std::vector<int>::const_iterator it = vec.begin();
    int min = *it;
    while (it != vec.end())
    {
        if (min > *it)
            min = *it;
        it++;
    }
    return (min);
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

void    PmergeMe::insert(std::string type)
{
    int min = 0;
    if (type == "list")
    {
        while (!this->_list.empty())
        {
            min = this->minList(this->_list);
            this->_rslist.push_back(min);
            this->deleteList(this->_list, min);
        }
    }
    else if (type == "vec")
    {
        while (!this->_vector.empty())
        {
            min = this->minVec(this->_vector);
            this->_rsvec.push_back(min);
            this->deleteVec(this->_vector, min);
        }
    }
}

void    PmergeMe::moveList(std::list<int>::iterator &it, int pos)
{
    for (int i = 0; i < pos; i++)
        it++;
}

int PmergeMe::count(int size)
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

void    PmergeMe::MergeInsert(std::string type)
{

    if (type == "list")
    {
        std::list<int>::iterator    left;
        std::list<int>::iterator    right;
        std::list<int>::iterator    templ;
        std::list<int>::iterator    tempr;
        int size = count(this->_list.size());
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
        insert("list");
    }
    else if (type == "vec")
    {
        std::vector<int>::iterator    left;
        std::vector<int>::iterator    right;
        std::vector<int>::iterator    templ;
        std::vector<int>::iterator    tempr;
        int size = count(this->_vector.size());
        left = right = templ = tempr = this->_vector.begin();
        this->moveVec(templ, 1);
        this->moveVec(right, this->_list.size() / 2);
        this->moveVec(tempr, this->_list.size() / 2 + 1);
        for (int i = 0; i < size; i++)
        {
            if (*left > *templ || *right > *tempr)
            {
                if (*left > *templ)
                    iter_swap(left, templ);
                if (*right > *tempr)
                    iter_swap(right, tempr);
                this->moveVec(left, 2);
                this->moveVec(templ, 2);
                this->moveVec(right, 2);
                this->moveVec(tempr, 2);
            }
        }
        insert("vec");
    }
}

void    PmergeMe::sort(std::string type)
{
    if (type == "list")
    {
        clock_t start = clock();
        this->MergeInsert("list");
        clock_t finish = clock();
        this->_timelist = double(finish - start);
    }
    else if (type == "vec")
    {
        clock_t start = clock();
        this->MergeInsert("vec");
        clock_t finish = clock();
        this->_timevec = double(finish - start);
    }
}

void    PmergeMe::printList(const std::list<int> &list)
{
    for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

void    PmergeMe::printTime()
{
	std::cout << "Time to process a range of " << _size << " elements with std::list: " << std::fixed << this->_timelist << " us\n";
	std::cout << "Time to process a range of " << _size << " elements with std::vector: " << std::fixed << this->_timevec << " us\n";
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
    std::cout << BMAG << "Before sort: " << RESET;
    printList(_list);
    this->sort("list");
    this->sort("vec");
    std::cout << BCYN << "After sort: " << RESET;
    printList(_rslist);
    this->printTime();
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
        _list = cp._list;
        _vector = cp._vector;
    }
    return (*this);
}