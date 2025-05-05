/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:40:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/05 18:49:26 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Default constructor
ClapTrap::ClapTrap() 
	: _name("DefaultClap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

// Name constructor
ClapTrap::ClapTrap(const std::string &name) 
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) 
	: _name(other._name), _hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " copy constructed" << std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned" << std::endl;
	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

// Attack
void	ClapTrap::attack(const std::string &target)
{
	if (!_hitPoints)
	{
		std::cout	<< "ClapTrap " << _name 
					<< " has no hit points to attack!" << std::endl;
		return;
	}
	if (!_energyPoints)
	{
		std::cout	<< "ClapTrap " << _name
					<< " has no energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout	<< "ClapTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage! " << _energyPoints
				<< " Energy Points left" << std::endl;
}

// Take Damage
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
	{
		_hitPoints -= amount;
		std::cout	<< "ClapTrap " << _name
					<< " takes " << amount
					<< " points of damage! " << _hitPoints
					<< " Hit Points left" << std::endl;
	}
}

// Be repaired
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout	<< "ClapTrap " << _name
					<< " is dead and cannot be repaired!" << std::endl;
		return;
	}
	if (!_energyPoints)
	{
		std::cout	<< "ClapTrap " << _name
					<< " has no energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout	<< "ClapTrap " << _name
				<< " is repaired by " << amount
				<< " points! Now has " << _hitPoints
				<< " Hit Points" << std::endl;
}