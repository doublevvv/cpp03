/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:35 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/02 16:10:09 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// * Attacking and repairing each cost 1 energy point
// ! ClapTrap can’t do anything if it has no hit points or energy points left.

ClapTrap::ClapTrap(std::string name) : _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Constructor was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was destroyed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &name)
{
	*this = _name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &name)
{

}

void	ClapTrap::setname(std::string name)
{
	this->_name = name;
}

std::string	ClapTrap::getname(void)
{
	return (this->_name);
}

// * When ClapTrap attacks, it causes its target to lose <attack damage> hit points
void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << "attack" << /*target*/ << "causing" << /*damage*/ <<
	"points of damage" << std::endl;

}
void	ClapTrap::takeDamage(unsigned int amount)
{

}

// * When ClapTrap repairs itself, it regains <amount> hit points
void	ClapTrap::beRepaired(unsigned int amount)
{

}

