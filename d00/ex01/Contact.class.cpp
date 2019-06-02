/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:35:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/18 11:35:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	this->full = 0;
	return;
}

int		Contact::set(void)
{
	if (Contact::full == 1)
	{
		std::cout << "Phonebook full." << std::endl;
		return (0);
	}
	Contact::full = 1;
	std::cout << "Enter first name: " << std::endl;
	std::getline(std::cin, Contact::_first_name);
	std::cout << "Enter last name: " << std::endl;
	std::getline(std::cin, Contact::_last_name);
	std::cout << "Enter nickname: " << std::endl;
	std::getline(std::cin, Contact::_nickname);
	std::cout << "Enter login: " << std::endl;
	std::getline(std::cin, Contact::_login);
	std::cout << "Enter postal address: " << std::endl;
	std::getline(std::cin, Contact::_postal_address);
	std::cout << "Enter email address: " << std::endl;
	std::getline(std::cin, Contact::_email_address);
	std::cout << "Enter phone number: " << std::endl;
	std::getline(std::cin, Contact::_phone_number);
	std::cout << "Enter birthday date: " << std::endl;
	std::getline(std::cin, Contact::_birthday_date);
	std::cout << "Enter favorite meal: " << std::endl;
	std::getline(std::cin, Contact::_favorite_meal);
	std::cout << "Enter underwear color: " << std::endl;
	std::getline(std::cin, Contact::_underwear_color);
	std::cout << "Enter darkest secret: " << std::endl;
	std::getline(std::cin, Contact::_darkest_secret);
	return (1);
}

void		Contact::search1(int i)
{
	std::cout << "         ";
	std::cout << i + 1;
	std::cout << "|";
	std::string		str;
	str = Contact::_first_name;
	int j = str.size();
	if (j < 10)
		std::cout << std::setw(10) << str << "|";
	else
	{
		str.erase(9);
		std::cout << str << "." << "|";
	}
	str = Contact::_last_name;
	j = str.size();
	if (j < 10)
		std::cout << std::setw(10) << str << "|";
	else
	{
		str.erase(9);
		std::cout << str << "." << "|";
	}
	str = Contact::_nickname;
	j = str.size();
	if (j < 10)
		std::cout << std::setw(10) << str << "|" << std::endl;
	else
	{
		str.erase(9);
		std::cout << str << "." << "|" << std::endl;
	}

}

int		Contact::search2()
{
	if (Contact::full == 0)
		return (0);
	std::cout << "First name: ";
	std::cout << Contact::_first_name << std::endl;
	std::cout << "Last name: ";
	std::cout << Contact::_last_name << std::endl;
	std::cout << "Nickname: ";
	std::cout << Contact::_nickname << std::endl;
	std::cout << "Login: ";
	std::cout << Contact::_login << std::endl;
	std::cout << "Postal address: ";
	std::cout << Contact::_postal_address << std::endl;
	std::cout << "Email address: ";
	std::cout << Contact::_email_address << std::endl;
	std::cout << "Phone number: ";
	std::cout << Contact::_phone_number << std::endl;
	std::cout << "Birthday date: ";
	std::cout << Contact::_birthday_date << std::endl;
	std::cout << "Favourite meal: ";
	std::cout << Contact::_favorite_meal << std::endl;
	std::cout << "Underwear color: ";
	std::cout << Contact::_underwear_color << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << Contact::_darkest_secret << std::endl;
	return (1);
}

Contact::~Contact(void)
{
	return;
}
