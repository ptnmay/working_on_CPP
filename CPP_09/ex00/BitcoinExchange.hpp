/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:39:25 by psaeyang          #+#    #+#             */
/*   Updated: 2024/03/25 22:25:51 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <exception>
# include <cstdlib>
# include <iomanip>

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
			BitcoinExchange(std::string const &av);
			BitcoinExchange(BitcoinExchange const& other);
			BitcoinExchange& operator=(BitcoinExchange const& cpy);

			bool 	create_data();
			bool 	check_data(std::string const &name);
			bool 	check_file(std::ifstream &file, std::string const &input);
			void 	addData(std::string const& line);
			void	read_input(std::ifstream &file);
			void	read_line(std::string const &line);
			void	calculate(time_t timedate, float &amount, std::string date);

			bool	bad_input(std::string const &line);
			time_t	convert_date(std::string const &date);
			int is_digit(char s);


	class CannotOpenFile : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return (BRED"Can't Open File");
			}
	};
	class ErrorDatabase : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return (BRED"Database Error");
			}
	};
	class WrongFormat : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return (BRED"Wrong Format");
			}
	};
};

#endif
