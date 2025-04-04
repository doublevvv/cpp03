/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:35 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:52:02 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// * Attacking and repairing each cost 1 energy point
// ! ClapTrap can’t do anything if it has no hit points or energy points left.

ClapTrap::ClapTrap(void) :_name("hello"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Parameter constructor was called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was destroyed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), _hit_point(obj._hit_point), _energy_point(obj._energy_point), _attack_damage(obj._attack_damage)
{
	std::cout << "Copy constructor was called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_energy_point = rhs._energy_point;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

std::string	ClapTrap::getname(void) const
{
	return (this->_name);
}

void	ClapTrap::set_attackdamage(int const value)
{
	this->_attack_damage = value;
}

int	ClapTrap::get_attackdamage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::set_energypoint(int const value)
{
	this->_attack_damage = value;
}

int	ClapTrap::get_energypoint(void) const
{
	return (this->_attack_damage);
}


// * When ClapTrap attacks, it causes its target to lose <attack damage> hit points
void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_point == 0)
		std::cout << "you already dead" << std::endl;
	else if (this->_energy_point == 0)
		std::cout << "you don't have enough energy point to attack" << std::endl;
	else
	{
		std::cout << "" << _name << " attack " << target << std::endl;
		this->_energy_point -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_point > 0)
	{
		std::cout << _name << " took " << amount << " hp of damage" << std::endl;
		this->_hit_point -= amount;
	}
	else
		std::cout << _name << " died" << std::endl;
}

// * When ClapTrap repairs itself, it regains <amount> hit points
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_point == 0)
		std::cout << "you already dead" << std::endl;
	else if (this->_energy_point == 0)
		std::cout << "you don't have enough energy point to attack" << std::endl;
	else
	{
		std::cout << amount << "++ recover point for " << _name << std::endl;
		this->_hit_point += amount;
		this->_energy_point -= 1;
	}
}

