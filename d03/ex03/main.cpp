/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:36 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:38 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{

	FragTrap Slavik( "Slavik" );
	FragTrap Nadia( "Nadia" );
	ScavTrap Andriuha ( "Andriuha" );

	Nadia.meleeAttack( Andriuha.getName() );
	Andriuha.takeDamage( Andriuha.getMaDamage() );
	Nadia.meleeAttack( Andriuha.getName() );
	Andriuha.takeDamage( Andriuha.getMaDamage() );

	Slavik.rangedAttack( Nadia.getName() );
	Nadia.takeDamage( Andriuha.getRaDamage() );
	
	Nadia.meleeAttack( Slavik.getName() );
	Slavik.takeDamage( Andriuha.getMaDamage() );
	
	Nadia.vaulthunter_dot_exe( Slavik.getName() );
	Nadia.vaulthunter_dot_exe( Slavik.getName() );
	Nadia.vaulthunter_dot_exe( Slavik.getName() );

	
	Andriuha.challengeNewcomer_dot_exe( Slavik.getName() );
	Andriuha.challengeNewcomer_dot_exe( Nadia.getName() );
	Andriuha.challengeNewcomer_dot_exe( Slavik.getName() );

	ClapTrap Clap( "Clap" );
	NinjaTrap Florin ( "Florin" );
	Florin.ninjaShoebox( Andriuha );
	Florin.ninjaShoebox( Florin );
	Florin.ninjaShoebox( Clap );
	Florin.ninjaShoebox( Slavik );

}
