/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:14:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/05 18:53:08 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>


int main(void)
{
	std::cout << "\n-- Creating all three types --\n";
	ClapTrap  ct("Clappy");
	ScavTrap  st("Serena");
	FragTrap  ft("Froggy");

	std::cout << "\n-- Testing attack() on each --\n";
	ct.attack("TargetA");
	st.attack("TargetB");
	ft.attack("TargetC");

	std::cout << "\n-- Testing special abilities --\n";
	st.guardGate();
	ft.highFivesGuys();

	std::cout << "\n-- Testing takeDamage() and beRepaired() on FragTrap --\n";
	ft.takeDamage(40);
	ft.beRepaired(25);

	std::cout << "\n-- Testing copy and assignment for FragTrap --\n";
	FragTrap ft2(ft);      // copy constructor
	FragTrap ft3;          // default
	ft3 = ft;              // assignment

	std::cout << "\n-- high five and attack --\n";
	ft2.highFivesGuys();
	ft3.attack("Lolo");

	std::cout << "\n-- Destruction at end of main --\n";
	return 0;
}
