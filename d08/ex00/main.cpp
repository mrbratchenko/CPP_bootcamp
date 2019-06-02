/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 14:34:09 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/29 14:34:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main( void )
{
	std::vector< int > lst1;

	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(3);
	lst1.push_back(4);
	lst1.push_back(5);
	lst1.push_back(6);

	try
	{
		easyfind(lst1, 4);
	}
	catch (std::range_error & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		easyfind(lst1, 120);
	}
	catch (std::range_error & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
