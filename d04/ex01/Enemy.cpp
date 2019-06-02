/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:06:11 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:14 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy ()
{
	return ;
}

Enemy::Enemy (int hp, std::string const & type): type(type), HP(hp)
{
	return ;
}


Enemy::Enemy( Enemy const &src )
{
	*this = src;
	return ;
}

Enemy &Enemy::operator=( Enemy const &src )
{
	this->type = src.type;
	this->HP = src.HP;
	return *this;
}

std::string Enemy::getType() const
{
	return this->type;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->HP -= damage;
	return;	
}

int Enemy::getHP( void ) const
{
	return this->HP;
}

Enemy::~Enemy ( void )
{
	return ;
}
