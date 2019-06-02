/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:45:18 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/27 16:45:20 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int 	main( void ) {

	unsigned int i;
	Array< int > a( void );

	Array< int > b( 3 );
	std::cout << "Elements of array b initialized by default: " << std::endl;
	for (i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	b[0] = 10;
	b[1] = 15;
	b[2] = 20;
	std::cout << "Elements of array b with new values: " << std::endl;
	for (i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	Array< int > c( 3 );
	c = b;
	std::cout << "Array c after assignment operator: " << std::endl;
	for (i = 0; i < c.size(); i++)
		std::cout << c[i] << std::endl;

	Array< int > d( c );
	std::cout << "Array d after copy: " << std::endl;
	for (i = 0; i < d.size(); i++)
		std::cout << d[i] << std::endl;

	std::cout << "Accessing second element of array d with operator[]: " << std::endl;
	std::cout << d[2] << std::endl;

	std::cout << "Number of elements in d: " << std::endl;
	std::cout << d.size() << std::endl;

	std::cout << "Accessing non-existent element[5] of array d: " << std::endl;
	try
	{
		std::cout << d[5] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}