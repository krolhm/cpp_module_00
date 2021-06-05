/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:10:52 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/05 20:33:11 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

void	phonebook_contact::print(void)
{
	std::cout << "]> first name: ";
	std::cout << first_name << std::endl;
	std::cout << "]> last name: ";
	std::cout << last_name << std::endl;
	std::cout << "]> nickname: ";
	std::cout << nickname << std::endl;
	std::cout << "]> login: ";
	std::cout << login << std::endl;
	std::cout << "]> postal adress: ";
	std::cout << postal_adress << std::endl;
	std::cout << "]> email adress: ";
	std::cout << email_adress << std::endl;
	std::cout << "]> phone number: ";
	std::cout << phone_number << std::endl;
	std::cout << "]> birthday date: ";
	std::cout << birthday_date << std::endl;
	std::cout << "]> favorite meal: ";
	std::cout << favorite_meal << std::endl;
	std::cout << "]> underwear color: ";
	std::cout << underwear_color << std::endl;
	std::cout << "]> darkest secret: ";
	std::cout << darkest_secret << std::endl;
}

void	phonebook_contact::listing(int i)
{
	std::cout << std::setw(10) << i << "|";
	display(first_name, true);
	display(last_name, true);
	display(nickname, false);
	std::cout << std::endl;
}

void	phonebook_contact::add(void)
{	
	std::cout << "]> first name: ";
	std::getline(std::cin >> std::ws, first_name);
	std::cout << "]> last name: ";
	std::getline(std::cin >> std::ws, last_name);
	std::cout << "]> nickname: ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "]> login: ";
	std::getline(std::cin >> std::ws, login);
	std::cout << "]> postal adress: ";
	std::getline(std::cin >> std::ws, postal_adress);
	std::cout << "]> email adress: ";
	std::getline(std::cin >> std::ws, email_adress);
	std::cout << "]> phone number: ";
	std::getline(std::cin >> std::ws, phone_number);
	std::cout << "]> birthday date: ";
	std::getline(std::cin >> std::ws, birthday_date);
	std::cout << "]> favorite meal: ";
	std::getline(std::cin >> std::ws, favorite_meal);
	std::cout << "]> underwear color: ";
	std::getline(std::cin >> std::ws, underwear_color);
	std::cout << "]> darkest secret: ";
	std::getline(std::cin >> std::ws, darkest_secret);
}