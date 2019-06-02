/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:45:18 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/27 16:45:20 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void	iter( T *array, int len, void (*funct)(T & x) ) {
	for ( int i = 0; i < len; i++) {
		funct(array[i]);
	}
}

template< typename T >
void 	square( T & x ) {
	x *= x ;
}

template< typename T >
void 	add( T & x ) {
	x += x ;
}

int 	main( void ) {
	
	int i;
	int intArray[] = {12, 82, 56};
	float floatArray[] = {12.12, 82.82, 56.56};

	std::cout << "Int array: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << intArray[i] << std::endl;
	}

	::iter( intArray, 3, square );
	std::cout << "Ints squared: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << intArray[i] << std::endl;
	}

	intArray[0] = 12;
	intArray[1] = 82;
	intArray[2] = 56;
	::iter( intArray, 3, add );
	std::cout << "Ints added: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << intArray[i] << std::endl;
	}

	std::cout << "Float array: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << floatArray[i] << std::endl;
	}

	::iter( floatArray, 3, square );
	std::cout << "Floats squared: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << floatArray[i] << std::endl;
	}

	floatArray[0] = 12.12;
	floatArray[1] = 82.82;
	floatArray[2] = 56.56;
	::iter( floatArray, 3, add );
	std::cout << "Floats added: " << std::endl;
	for ( i = 0; i < 3; i++) {
		std::cout << floatArray[i] << std::endl;
	}

	return 0;
}

