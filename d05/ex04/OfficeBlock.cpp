/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include "Form.hpp"

OfficeBlock::OfficeBlock ( void )
{
	this->intern = NULL;
	this->signing = NULL;
	this->executing = NULL;
	return ;
}

OfficeBlock::OfficeBlock ( Intern *intern, Bureaucrat *signing, Bureaucrat *executing )
{
	this->intern = intern;
	this->signing = signing;
	this->executing = executing;
	return ;
}

OfficeBlock::OfficeBlock( OfficeBlock const &src )
{
	*this = src;
	return ;
}

OfficeBlock &OfficeBlock::operator=( OfficeBlock const & )
{
	return *this;
}

OfficeBlock::~OfficeBlock ( void )
{
	return ;
}

void OfficeBlock::setIntern( Intern *intern)
{
	this->intern = intern;
}

void OfficeBlock::setSigning ( Bureaucrat *signing)
{
	this->signing = signing;
}

void OfficeBlock::setExecuting( Bureaucrat *executing)
{
	this->executing = executing;
}

Intern* OfficeBlock::getIntern(void) const
{
    return this->intern;
}

Bureaucrat * OfficeBlock::getSigning (void) const
{
    return this->signing;
}

Bureaucrat * OfficeBlock::getExecuting(void) const
{
    return this->executing;
}


void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
    Form *newForm;
    
    newForm = this->intern->makeForm(form, target);
    this->signing->signForm(*newForm);
    this->executing->executeForm(*newForm);
    
    if (!newForm || !newForm->getisSigned() ||
         this->getExecuting()->getGrade() > newForm->getGradeRequiredToExecute())
    {
        throw OfficeBlock::NoBureaucracyException();
    }
}

OfficeBlock::NoBureaucracyException::NoBureaucracyException( void )
{
    return ;
}

OfficeBlock::NoBureaucracyException::~NoBureaucracyException( void ) throw()
{
    return ;
}

OfficeBlock::NoBureaucracyException::NoBureaucracyException( NoBureaucracyException const &src )
{
    *this = src;
    return ;
}
OfficeBlock::NoBureaucracyException &OfficeBlock::NoBureaucracyException::operator=( NoBureaucracyException const & )
{
    return *this;
}

const char * OfficeBlock::NoBureaucracyException::what() const throw()
{
    return "No bureaucracy for you today... Sorry!";
}