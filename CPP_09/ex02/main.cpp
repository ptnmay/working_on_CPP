/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:54 by psaeyang          #+#    #+#             */
/*   Updated: 2024/04/06 02:50:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    allNum(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        std::string argv = av[i];
        for (size_t j = 0; j < argv.length(); j++)
        {
            if (!isdigit(argv[j]))
                return false;
        }
    }
    return true;
}

int main(int ac, char **av)
{
    PmergeMe    pm;

    if (!allNum(ac, av) || ac < 2)
    {
        std::cout << BRED"Error: invalid argument\n";
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