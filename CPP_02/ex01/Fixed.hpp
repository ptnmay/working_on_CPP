/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 00:13:24 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 02:31:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"

class Fixed
{
	private:
		int	fixp;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed const &Fixcpy);
		Fixed &		operator = (Fixed const &Fixcp);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& print, Fixed const& show);

#endif