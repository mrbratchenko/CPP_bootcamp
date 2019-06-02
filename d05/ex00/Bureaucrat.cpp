/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:47 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:49 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( void ): _name("Bureaucrat"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat ( std::string name, int grade ) : _name( name )
{
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	else{
		this->_grade = grade;
	}
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &src )
{
	this->_grade = src._grade;
	return *this;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src )
{
	*this = src;
	return ;
}

std::string	Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::setGrade( int grade )
{
	this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat ( void )
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void )
{
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException ( void ) throw()
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const &src )
{
	*this = src;
	return ;
}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=( GradeTooHighException const & )
{
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void )
{	
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const &src )
{
	*this = src;
	return ;
}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=( GradeTooLowException const & )
{
	return *this;
}

void Bureaucrat::incrementGrade( void )
{
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		this->setGrade(this->_grade-1);
	}	
}

void Bureaucrat::decrementGrade( void )
{
	if (this->_grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->setGrade(this->_grade+1);
	}
}

std::ostream &operator<<( std::ostream &o, Bureaucrat const &object )
{
	 o << "Bureaucrat " << object.getName() << " has grade " <<  object.getGrade();
	return o;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high for a new Bureaucrat!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low for a new Bureaucrat!";
}

