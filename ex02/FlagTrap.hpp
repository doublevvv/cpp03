/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaggoun <vlaggoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:18:27 by vlaggoun          #+#    #+#             */
/*   Updated: 2025/04/04 14:48:04 by vlaggoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
#define FLAG_TRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
public:

	FlagTrap();
	~FlagTrap();
	FlagTrap(std::string name);
	FlagTrap(const FlagTrap &name);
	FlagTrap &operator=(const FlagTrap &target);
	void	highFivesGuys();
};

#endif
