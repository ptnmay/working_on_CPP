/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:03:21 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/07 23:08:44 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenum;
		std::string	_darksecret;
	public:
		Contact();
		~Contact();
		std::string get_name();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_phone();
		std::string get_secret();
		void set_name(std::string name);
		void set_lastname(std::string lastname);
		void set_nickname(std::string nickname);
		void set_phone(std::string phone);
		void set_secret(std::string name);
	
};


#endif