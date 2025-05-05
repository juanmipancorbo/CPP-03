/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:14:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/05 19:26:56 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n-- Create DiamondTrap --\n";
	DiamondTrap dt("Gem");

	std::cout << "\n-- Test attack() (from ScavTrap) --\n";
	dt.attack("Target");

	std::cout << "\n-- Test whoAmI() --\n";
	dt.whoAmI();

	std::cout << "\n-- Test takeDamage() and beRepaired() --\n";
	dt.takeDamage(20);
	dt.beRepaired(10);

	std::cout << "\n-- Test copy & assignment --\n";
	DiamondTrap dt2(dt);
	DiamondTrap dt3("Temp");
	dt3 = dt;

	std::cout << "\n--whoAmI and attack --\n";
	dt2.whoAmI();
	dt3.attack("Lolo");

	std::cout << "\n-- End of main, destructors in reverse order --\n";
	return 0;
}