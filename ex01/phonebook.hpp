/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:10:56 by rbourgea          #+#    #+#             */
/*   Updated: 2021/06/04 10:56:46 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class phonebook_contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

public:
    phonebook_contact(void) {}
    ~phonebook_contact(void) {}
    void    add(void);
    void    listing(int i);
    void    print(void);
};

void display(std::string str, bool end);

#endif