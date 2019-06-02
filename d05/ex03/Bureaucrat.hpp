/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:08:41 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 10:08:42 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException( void );
				GradeTooHighException( GradeTooHighException const &src );
				~GradeTooHighException( void ) throw();

				GradeTooHighException &operator=( GradeTooHighException const & );
				virtual const char * what() const throw();

		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException( void );
				GradeTooLowException( GradeTooLowException const &src );
				~GradeTooLowException( void ) throw();

				GradeTooLowException &operator=( GradeTooLowException const & );
				virtual const char * what() const throw();

		};

		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat( void );

		Bureaucrat &operator=( Bureaucrat const &object );

		std::string getName( void ) const;
		int getGrade( void ) const;

		void incrementGrade( void );
		void decrementGrade( void );
		void signForm( Form &object );
		void executeForm(Form const & form);
		void setGrade( int grade );
	
	private:
		const std::string _name;
		int _grade;
};

std::ostream &operator<<( std::ostream &o, Bureaucrat const &object );

#endif
