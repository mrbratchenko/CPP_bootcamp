/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form ( void ): _name( "noname" ), _isSigned(false),
_gradeRequiredToSign ( 1 ), _gradeRequiredToExecute ( 1 )
{
	return ;
}

Form::Form ( std::string name, int gradeRequiredToSign, int gradeRequiredToExecute) : 
			_name(name), _gradeRequiredToSign (gradeRequiredToSign), 
			_gradeRequiredToExecute (gradeRequiredToExecute)
{
	this->_isSigned = false;
	if (gradeRequiredToSign < 1){
		throw Form::GradeTooHighException();
	}
	else if (gradeRequiredToSign > 150){
		throw Form::GradeTooLowException();
	}
	if (gradeRequiredToExecute < 1){
		throw Form::GradeTooHighException();
	}
	else if (gradeRequiredToExecute > 150){
		throw Form::GradeTooLowException();
	}
}

Form::Form( Form const &src ) : 
_name( "noname" ), _isSigned( false ), _gradeRequiredToSign ( 1 ), _gradeRequiredToExecute ( 1 )
{
	*this = src;
	return ;
}

void Form::beSigned(Bureaucrat &brcrt)
{
	if (brcrt.getGrade() <= this->_gradeRequiredToSign)
	{
		this->_isSigned = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->_gradeRequiredToExecute)
	{
		return ;
	}
	else
	{
		throw GradeTooLowException();
	}
}

Form &Form::operator=( Form const &src )
{
	this->_isSigned = src._isSigned;
	return *this;
}

Form::~Form ( void )
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException( void )
{
	return ;
}

Form::GradeTooHighException::~GradeTooHighException ( void ) throw()
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const &src )
{
	*this = src;
	return ;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=( GradeTooHighException const & )
{
	return *this;
}

Form::GradeTooLowException::GradeTooLowException( void )
{
	return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const &src )
{
	*this = src;
	return ;
}
Form::GradeTooLowException &Form::GradeTooLowException::operator=( GradeTooLowException const & )
{
	return *this;
}

std::ostream &operator<<( std::ostream &o, Form const &object )
{
	 o << "Form " << object.getName() << " has gradeRequiredToSign " <<  object.getGradeRequiredToSign() <<
	 " and gradeRequiredToExecute " << object.getGradeRequiredToExecute();
	return o;
}

std::string	Form::getName( void ) const
{
	return this->_name;
}

int Form::getGradeRequiredToExecute( void ) const
{
	return this->_gradeRequiredToExecute;
}

int Form::getGradeRequiredToSign( void ) const
{
	return this->_gradeRequiredToSign;
}

bool Form::getisSigned( void ) const
{
	return this->_isSigned;
}

std::string Form::getTarget( void ) const
{
	return this->_target;
}

void Form::setTarget( std::string tar )
{

	this->_target = tar;
	return ;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high! (form)";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low! (form)";
}
