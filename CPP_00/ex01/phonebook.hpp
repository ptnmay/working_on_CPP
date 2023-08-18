/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:04:12 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/19 01:39:07 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class	phonebook;
{
	private:
		contact	info[8];
	public:
		phonebook(void);
		~phonebook(void);
		void	ADD(void);
		void	SEARCH(void);
		void	Print_info(void);
};

#endif