/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:22:15 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:52:06 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	this->_name = ("hello");
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "Default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap("ScavTrap")
{
	this->_name = (name);
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << "Parameter constructor was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor was destroyed" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap("ScavTrap")
{
	this->_name = obj._name;
	this->_hit_point = obj._hit_point;
	this->_energy_point = obj._energy_point;
	this->_attack_damage = obj._attack_damage;
	std::cout << "Copy constructor was called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_energy_point = rhs._energy_point;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

// *display a message indicating that ScavTrap is now in Gate keeper mode
void	ScavTrap::guardGate()
{
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}
