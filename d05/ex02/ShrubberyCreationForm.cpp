/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 18:53:07 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/25 18:53:08 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( void ): Form( "ShrubberyCreationForm" , 145, 137)
{
	this->setTarget("unknown");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : Form( "ShrubberyCreationForm" , 145, 137)
{
	this->setTarget(target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ): Form( "ShrubberyCreationForm" , 145, 137)
{
	*this = src;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const & )
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
	return ;
}

void ShrubberyCreationForm::action ( void ) const
{
	std::ofstream outfile(this->getTarget() + "_shrubbery")  ;                                         	
	outfile <<"			              v .   ._, |_  ., "<<std::endl;
	outfile <<"		           `-._\\/  .  \\ /    |/_ "<<std::endl;
	outfile <<"		               \\  _\\, y | \\/ "<<std::endl;
	outfile <<"		         _\\_.___\\, \\/ -.\\|| "<<std::endl;
	outfile <<"		           `7-,--.`._||  / / , "<<std::endl;
	outfile <<"		           /`     `-. `./ / |/_. "<<std::endl;
	outfile <<"		                     |    |/ "<<std::endl;
	outfile <<"		                     |_    / "<<std::endl;
	outfile <<"		                     |-   | "<<std::endl;
	outfile <<"		                     |   =|" <<std::endl;
	outfile <<"		                     |    | "<<std::endl;
	outfile <<"		--------------------/ ,  . \\--------._" <<std::endl;
	outfile.close();
	return ;
}
