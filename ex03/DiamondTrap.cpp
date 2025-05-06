/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:03:56 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/06 17:53:59 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// Constructor
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name")
	, ScavTrap()
	, FragTrap()
	, _name(name)
{
	_hitPoints    = FragTrap::_hitPoints;		// 100
	_energyPoints = ScavTrap::_energyPoints;	// 50
	_attackDamage = FragTrap::_attackDamage;	// 30

	std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other)
	, ScavTrap(other)
	, FragTrap(other)
	, _name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copy constructed" << std::endl;
}

// Copy assignment
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);		// assign ClapTrap //
		ScavTrap::operator=(other);		// does not re-assign ClapTrap because...
		FragTrap::operator=(other);		// ..."virtual" inheritance
		_name = other._name;
	}
	std::cout << "DiamondTrap " << _name << " assigned" << std::endl;
	return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructed" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

// special ability
void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << _name
	          << ", ClapTrap name is " << ClapTrap::_name
	          << std::endl;
}
