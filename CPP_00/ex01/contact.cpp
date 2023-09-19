/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:07:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/19 23:52:33 by psaeyang         ###   ########.fr       */
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

// void	Contact::show_search(int j)
// {
// 			std::cout << std::setw(9) << std::right << _firstname.substr(0, (9)) + "." << "|";
// 			std::cout << std::setw(9) << std::right << _lastname.substr(0, (9)) + "." << "|";
// 			std::cout << std::setw(9) << std::right << _nickname.substr(0, (9)) + "." << "|";
// 		else
			
// 		std::cout << std::endl;
// }
