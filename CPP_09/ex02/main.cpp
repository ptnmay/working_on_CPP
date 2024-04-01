/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:54 by psaeyang          #+#    #+#             */
/*   Updated: 2024/04/01 22:26:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    allNum(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        for (size_t j = 0; j < av[i].length(); j++)
        {
            if (!isdigit(av[i]))
                return false;
        }
    }
    return true;
}

int main(int ac, char **av)
{
    PmergeMe    pm;

    if (ac < 2)
    {
        std::cout << BRED"Error: No arguments\n";
        return 1;
    }
    if (!allNum(ac, av))
    {
        std::cout << BRED"Error: Argument should be number\n";
        return 1;
    }
    try
    {
        pm.run(ac, av);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}