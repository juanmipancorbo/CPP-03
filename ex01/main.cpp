/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:14:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/30 20:39:51 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n-- Creating ClapTrap and ScavTrap --\n";
	ClapTrap  ct("Clapa");
	ScavTrap  st("Serener");

	std::cout << "\n-- Testing attack() --\n";
	ct.attack("TargetA");
	st.attack("TargetB");

	std::cout << "\n-- Testing special guardGate() --\n";
	st.guardGate();

	std::cout << "\n-- Testing takeDamage() and beRepaired() --\n";
	st.takeDamage(30);
	st.beRepaired(20);

	std::cout << "\n-- Testing copy and assignment chaining --\n";
	ScavTrap st2(st);         // copy constructor
	ScavTrap st3;             // default
	st3 = st;                 // assignment

	std::cout << "\n-- st2 attacks Barto --\n";
	st2.attack("Barto");
	std::cout << "\n-- st3 guardGate() --\n";
	st3.guardGate();

	std::cout << "\n-- Destruction at end of main --\n";
	return 0;
}
