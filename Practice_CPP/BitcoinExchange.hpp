/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:39:25 by psaeyang          #+#    #+#             */
/*   Updated: 2024/01/25 23:14:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>
# include <fstream>
# include <map>
# include <utility>
# include <ctime>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <stdlib.h>

# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define RESET "\e[0m"


class BitcoinExchange
{
	private:
			std::map<std::string, float>		_database;
			
	public :
			~BitcoinExchange();
			BitcoinExchange();
			BitcoinExchange(BitcoinExchange const& other);
			BitcoinExchange& operator=(BitcoinExchange const& cpy);
			
			void	start(std::string fileName);
			bool	checkDate(std::string date);
			bool	checkValue(std::string value);
			
	
	class CannotOpenFile : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Can't Open File");
			}
	};
	class NotDataCSV : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("should be data.cvs");
			}
	};
	class WrongFormat : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Wrong Format");
			}
	};
};

#endif
