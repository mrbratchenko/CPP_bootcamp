/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H

#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"


class OfficeBlock
{
    private:

        Intern *intern;
        Bureaucrat *signing;
        Bureaucrat *executing;
    public:
    	class NoBureaucracyException: public std::exception
		{
			public:
				NoBureaucracyException( void );
				NoBureaucracyException( NoBureaucracyException const &src );
				~NoBureaucracyException( void ) throw();

				NoBureaucracyException &operator=( NoBureaucracyException const & );
				virtual const char * what() const throw();

		};
        
        OfficeBlock( void );
        OfficeBlock(Intern *, Bureaucrat* , Bureaucrat *);
        OfficeBlock( OfficeBlock const &src );
        ~OfficeBlock( void );

        OfficeBlock &operator=( OfficeBlock const &object );

        void doBureaucracy(std::string, std::string);

        void setIntern(Intern *);
        void setSigning(Bureaucrat *);
        void setExecuting(Bureaucrat *);
    
        Intern * getIntern() const;
        Bureaucrat * getSigning() const;
        Bureaucrat * getExecuting()const;

};

#endif