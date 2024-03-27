/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 00:02:21 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/28 04:25:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN R;
    if (ac < 2)
    {
        std::cout << BRED << "Error: No arguments\n";
        return 1;
    }
    if (ac > 2)
    {
        std::cout << BRED << "Error: Too many arguments\n";
        return 1;
    }
    try
    {
        R.run(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }
    return 0;
}