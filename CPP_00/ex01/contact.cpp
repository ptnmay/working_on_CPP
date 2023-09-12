/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:07:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/13 00:49:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

void	save_contact(std::string *contact)
{
	this->_firstname = contact[0];
	this->_lastname = contact[1];
	this->_nickname = contact[2];
	this->_phonenum = contact[3];
	this->_darksecret = contact[4];
}


