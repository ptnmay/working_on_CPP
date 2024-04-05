/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <psaeyang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 04:41:47 by psaeyang          #+#    #+#             */
/*   Updated: 2024/04/03 04:58:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <list>
# include <ctime>
# include <iterator>
# include <algorithm>
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


class PmergeMe
{
	private:
			std::list<int>	_list;
			std::vector<int>	_vector;
			std::list<int>	_rslist;
			std::vector<int>	_rsvec;
			int			_size;
			double		_timelist;
			double		_timevec;
	public :
			~PmergeMe();
			PmergeMe();
			PmergeMe(PmergeMe const& other);
			PmergeMe& operator=(PmergeMe const &cp);
			void	printList(const std::list<int> &list);
			void	printTime();
			void	run(int ac, char **av);
			void	addList(int ac, char **av);
			void	sortList();
			void	mergeList();
			int		countList(int size);
			void	moveList(std::list<int>::iterator &it, int pos);
			void	insertList();
			int		minList(const std::list<int> &list);
			void	deleteList(std::list<int> &list, int value);

	class Negnum : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return (BRED"Error: Negative number");
			}
	};
};


#endif