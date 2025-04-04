/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:33 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:07:56 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &name);
		ClapTrap &operator=(const ClapTrap &rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getname() const;
		int	get_attackdamage() const;
		void set_attackdamage(int const value);
		void	set_energypoint(int const value);
		int	get_energypoint(void) const;

protected:
		std::string	_name;
		int	_hit_point;
		int	_energy_point;
		int	_attack_damage;
};


#endif
