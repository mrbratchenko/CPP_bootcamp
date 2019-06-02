/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:38:58 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/18 13:39:09 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string		_postal_address;
		std::string		_email_address;
		std::string		_phone_number;
		std::string		_birthday_date;
		std::string		_favorite_meal;
		std::string		_underwear_color;
		std::string		_darkest_secret;

	public:
		int				full;
		int				set(void);
		void			search1(int i);
		int				search2(void);
						Contact(void);
						~Contact(void);

};

#endif
