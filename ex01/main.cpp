/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:14 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:53:00 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int    main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	ScavTrap v("ScavTrap");

	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	a.set_attackdamage(9);
	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	b.beRepaired(3);
	b.set_energypoint(0);
	b.beRepaired(1);
	a.attack("B");
	v.guardGate();
	b.takeDamage(a.get_attackdamage());
	a.attack("B");
	b.takeDamage(a.get_attackdamage());
	b.beRepaired(1);
}

