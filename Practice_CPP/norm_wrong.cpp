/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_wrong.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 03:54:13 by psaeyang          #+#    #+#             */
/*   Updated: 2023/08/03 04:21:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string str = "hello world\n";
	cout << "The length of the txt string is: " << txt.size();
	cout << "Length of the str is: " << str.length();
	return 0;
}

