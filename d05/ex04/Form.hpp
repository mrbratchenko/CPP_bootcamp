/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:13 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:15 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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

		Form( void );
		Form( std::string name, int gradeRequiredToExecute, int gradeRequiredToSign );
		Form( Form const &src );
		~Form( void );

		Form &operator=( Form const &object );

		std::string getName( void ) const;
		int getGrade( void ) const;
		int getGradeRequiredToExecute( void ) const;
		int getGradeRequiredToSign( void ) const;
		bool getisSigned( void ) const;
		void beSigned( Bureaucrat &object);
		void setTarget( std::string tar );
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget( void ) const;
		virtual void action( void ) const = 0;
	
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeRequiredToSign;
		const int _gradeRequiredToExecute;
		std::string _target;
};

std::ostream &operator<<( std::ostream &o, Form const &object );

#endif

