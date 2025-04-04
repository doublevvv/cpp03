/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3025/04/04 13:22:15 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:52:15 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap("FlagTrap")
{
	this->_name = ("hello");
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "Default constructor was called" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap("FlagTrap")
{
	this->_name = (name);
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << "Parameter constructor was called" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "Destructor was destroyed" << std::endl;
}
FlagTrap::FlagTrap(const FlagTrap &obj) : ClapTrap("FlagTrap")
{
	this->_name = obj._name;
	this->_hit_point = obj._hit_point;
	this->_energy_point = obj._energy_point;
	this->_attack_damage = obj._attack_damage;
	std::cout << "Copy constructor was called" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_energy_point = rhs._energy_point;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

void	FlagTrap::highFivesGuys()
{
	std::cout << _name << " highfives !" << std::endl;
}
