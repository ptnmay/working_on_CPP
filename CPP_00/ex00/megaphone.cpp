/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 05:35:31 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/03 06:13:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	else
	{
		for (int i = 1; av[i]; i++)
		{
			// if (i > 1)
			// 	std:: cout << " ";
			for (int j = 0; av[i][j]; j++)
			{
				std:: cout << (char)std::toupper(av[i][j]);
			}
		}
		std:: cout << "\n";
	}
}
