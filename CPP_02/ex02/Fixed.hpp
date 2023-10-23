/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 02:44:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/10/23 22:34:56 by psaeyang         ###   ########.fr       */
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

//		compare
		bool	operator>(Fixed const& cmp) const;
		bool	operator>=(Fixed const& cmp) const;
		bool	operator<(Fixed const& cmp) const;
		bool	operator<=(Fixed const& cmp) const;
		bool	operator==(Fixed const& cmp) const;
		bool	operator!=(Fixed const& cmp) const;

//		arithment
		Fixed 		operator + (Fixed const &Fixcp) const;
		Fixed 		operator - (Fixed const &Fixcp) const;
		Fixed 		operator * (Fixed const &Fixcp) const;
		Fixed 		operator / (Fixed const &Fixcp) const;

//		incre / decre
		Fixed	&operator++(void);
		Fixed	 operator++(int);
		Fixed	&operator--(void);
		Fixed	 operator--(int);
		
//		min max
		static Fixed&		min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed&		max(Fixed &a, Fixed &b);
		static Fixed const&	max(Fixed const &a, Fixed const &b);


};

std::ostream&	operator<<(std::ostream& print, Fixed const& show);

#endif