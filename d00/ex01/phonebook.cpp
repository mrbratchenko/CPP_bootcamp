/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:53:22 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/18 10:53:24 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	ft_search(Contact *contact, int i)
{
	int j;

	j = 0;
	std::string		str;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	while (j < i)
	{
		contact[j].search1(j);
		j++;
	}
	std::cout << "Please enter index of desired entry: " << std::endl;
	std::getline(std::cin, str);
	j = std::atoi(&str[0]);
	if (!(j > 0 && j < 9) || str.length() > 1)
		std::cout << "Invalid id, sorry." << std::endl;
	else if (contact[j - 1].search2() == 1)
		;
	else
		std::cout << "No entry under this id, sorry." << std::endl;
}

int	 	main(void)
{
	Contact			contact[8];
	std::string		str;
	int				i;

	i = 0;
	std::cout << "Welcome to 80's PhoneBook. To initialize a new contact enter ADD," << std::endl;
	std::cout << "to search for a contact enter SEARCH, to quit enter EXIT:" << std::endl;
	while (true)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT: " << std::endl;
		if(!std::getline(std::cin, str))
			return (0);
		if (str == "ADD")
		{
			if (contact[7].full == 1)
			{
				std::cout << "Phonebook full." << std::endl;
			}
			else
			{
				contact[i].set();
				i++;
			}
		}
		else if (str == "SEARCH")
		{
			ft_search(contact, i);
			
		}
		else if (str == "EXIT")
			return (0);
	}
	return (0);
}
