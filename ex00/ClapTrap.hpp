/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:33 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/02 16:08:23 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &name);
		ClapTrap &operator=(const ClapTrap &name);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	setname(std::string);
		std::string	getname();

private:
		std::string	_name;
		int	_hit_point;
		int	_energy_point;
		int	_attack_damage;
};


#endif
