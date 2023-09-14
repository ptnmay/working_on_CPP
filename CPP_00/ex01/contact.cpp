/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:07:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/14 22:50:13 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

std::string	Contact::get_firstname()
{
	return (this->_firstname);
}

std::string	Contact::get_lastname()
{
	return (this->_lastname);
}

std::string	Contact::get_nickname()
{
	return (this->_nickname);
}

std::string	Contact::get_phone()
{
	return (this->_phonenum);
}

std::string	Contact::get_secret()
{
	return (this->_darksecret);
}

void	Contact::save_contact(std::string *contact)
{
	this->_firstname = contact[0];
	this->_lastname = contact[1];
	this->_nickname = contact[2];
	this->_phonenum = contact[3];
	this->_darksecret = contact[4];
}

