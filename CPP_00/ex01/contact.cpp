/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:07:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/21 21:24:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

std::string Contact::get_name()
{
	return (_firstname);
}

void	Contact::set_name(std::string name)
{
	_firstname = name;
}


