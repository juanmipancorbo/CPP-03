/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:53:51 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/30 20:30:23 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Default constructor
ScavTrap::ScavTrap()
{
	_name = "DefaultScav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

// Name constructor
ScavTrap::ScavTrap(const std::string &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "SlavTrap " << _name << " copy constructed" << std::endl;
}

// Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "SlavTrap " << _name << " assigned" << std::endl;
	return *this;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructed" << std::endl;
}

// Attack
void	ScavTrap::attack(const std::string &target)
{
	if (!_hitPoints)
	{
		std::cout	<< "ScavTrap " << _name 
					<< " has no hit points to attack!" << std::endl;
		return;
	}
	if (!_energyPoints)
	{
		std::cout	<< "ScavTrap " << _name
					<< " has no energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout	<< "ScavTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage! \n" << _energyPoints
				<< " Energy Points left" << std::endl;
}

// Gate keeper mode
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}