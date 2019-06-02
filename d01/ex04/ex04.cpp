/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:24:58 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:25:00 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int			main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string* strPointer = &str;
	std::string& strReference = str;
	std::cout << *strPointer << std::endl;
	std::cout << strReference << std::endl;
	return (0);
}
