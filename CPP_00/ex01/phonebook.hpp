/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:04:12 by psaeyang          #+#    #+#             */
/*   Updated: 2023/09/19 20:10:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	info[8];
		std::string type_info[5];
		int	check(std::string contacts, std::string type, int count);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		num_contact;
		void	ADD(void);
		void	SEARCH(void);
		void	display_contact(void);
};

#endif
