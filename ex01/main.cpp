/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:11:02 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/04 16:45:13 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

void	display(std::string str, bool end)
{
	if (str.length() >= 10)
	{
		std::cout << str.substr(0, 9) << ".";
	}
	else
	{
		std::cout << std::setw(10) << str;
	}
	if (end)
	{
		std::cout << "|";
	}
}

void	search(phonebook_contact phonebook[8], int i)
{
	display("index", true);
	display("prenom", true);
	display("nom de famille", true);
	display("pseudo", false);
	std::cout << std::endl;
	for (int j = 0; j < i; j++)
	{
		phonebook[j].listing(j);
	}
	std::cout << "] Enter contact index: ";
	std::string index;
	std::cin >> index;
	if (index[0] < '0' || index[0] > 47 + i || index.length() != 1)
	{
		std::cout << "] Contact not found..." << std::endl;
	}
	else
	{
		phonebook[index[0] - 48].print();
	}
}

int		main ()
{
	phonebook_contact	contact[8];
	std::string			buff;
	int					i;

	std::cout << "]===[PHONE BOOK]===[" << std::endl;
	std::cout << "]> ";
	std::cin >> buff;
	while (buff != "EXIT")
	{
		if (buff == "ADD")
		{
			if (i >= 8)
			{
				std::cout << "]== Not enough storage space !" << std::endl;
			} 
			else 
			{
				contact[i].add();
				++i;
			}
		}
		if (buff == "SEARCH")
		{
			search(contact, i);
		}
		if (buff == "")
		{
			std::cout << "]> ";
			std::cin >> buff;
		}
		std::cout << "]> ";
		std::cin >> buff;
	}
	return (0);
}