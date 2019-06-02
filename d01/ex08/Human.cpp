/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:32:46 by sbratche          #+#    #+#             */
/*   Updated: 2018/06/19 18:32:48 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Human attacks " << target << " with melee attack." << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Human attacks " << target << " with ranged attack." << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Human attacks " << target << " with shout." << std::endl;
}

void  Human::action(std::string const & action_name, std::string const & target)
{
	std::string actionRange[] = {"melee", "ranged", "shout"};

	typedef void (Human::*Actions)(std::string const & target);
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3 ; i++)
	{
		if (actionRange[i] == action_name)
		{
			(this->*(actions[i]))(target);
		}
	}
}
