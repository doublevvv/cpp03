/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:14 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:57:55 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int    main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	ScavTrap c("ScavTrap");
	FlagTrap v("FlagTrap");

	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	a.set_attackdamage(9);
	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	b.beRepaired(3);
	c.guardGate();
	b.set_energypoint(0);
	b.beRepaired(1);
	a.attack("B");
	v.highFivesGuys();
	b.takeDamage(a.get_attackdamage());
	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	b.beRepaired(1);
}

