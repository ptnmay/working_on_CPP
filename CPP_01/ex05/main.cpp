/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:26:54 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/14 01:34:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl Hr;
	
	Hr.complain("debug");
	Hr.complain("info");
	Hr.complain("warning");
	Hr.complain("error");
	Hr.complain("blablabla");
}