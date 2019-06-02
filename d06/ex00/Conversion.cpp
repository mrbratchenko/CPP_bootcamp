/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion ( void ): _input("0"), _char ('\0'), _int(0), _float(0), _double(0)
{
	return ;
}

Conversion::Conversion ( std::string input ): _input(input)
{
	return ;
}

std::ostream &operator<<( std::ostream &o, Conversion  &object )
{
	o << "char: ";
	try
	{
		object.setChar(object.getInput());
		o << "'" << object.getChar() << "'" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (const char * &str)
	{
		o << str<< std::endl;
	}

	o << "int: ";
	try
	{
		object.setInt(object.getInput());
		o << object.getInt() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}

	o << "float: ";
	try
	{
		object.setFloat(object.getInput());
		o << std::fixed << std::setprecision(1) << object.getFloat() << "f" << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}

	o  << "double: ";
	try
	{
		object.setDouble(object.getInput());
		o << std::fixed << std::setprecision(1) << object.getDouble() << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}

	return o;
}


Conversion &Conversion::operator=( Conversion const &src )
{
	this->_input = src._input;
	return *this;
}

Conversion::Conversion( Conversion const &src )
{
	*this = src;
	return ;
}

Conversion::~Conversion ( void )
{
	return ;
}

std::string Conversion::getInput( void ) const
{
	return this->_input;
}

char Conversion::getChar( void ) const
{
	return this->_char;
}

int Conversion::getInt( void ) const
{
	return this->_int;
}

float Conversion::getFloat( void ) const
{
	return this->_float;
}

double Conversion::getDouble( void ) const
{
	return this->_double;
}

void Conversion::setChar( std::string input )
{
	if (input.length() == 1 && ((input[0] >= 33 && input[0] <= 47) || 
		(input[0] >= 58 && input[0] <= 122)))
		this->_char = static_cast<char>(input[0]);
	else
		this->_char = static_cast<char>(stoi(input));
	if (!isprint(this->_char))
		throw "Non displayable";
}

void Conversion::setInt( std::string input )
{
	if (input.length() == 1 && ((input[0] >= 33 && input[0] <= 47) || 
		(input[0] >= 58 && input[0] <= 122)))
		this->_int = static_cast<int>(input[0]);
	else
		this->_int = stoi(input);
}

void Conversion::setFloat( std::string input )
{
	if (input.length() == 1 && ((input[0] >= 33 && input[0] <= 47) || 
		(input[0] >= 58 && input[0] <= 122)))
		this->_float = static_cast<float>(input[0]);
	else
		this->_float = stof(input);
}

void Conversion::setDouble( std::string input )
{
	if (input.length() == 1 && ((input[0] >= 33 && input[0] <= 47) || 
		(input[0] >= 58 && input[0] <= 122)))
		this->_double = static_cast<double>(input[0]);
	else
		this->_double = stod(input);
}


