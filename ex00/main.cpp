/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:14:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/29 20:20:56 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap philip("Philip");
	ClapTrap bartolo("Bartolo");

	philip.attack("Bartolo");
	bartolo.takeDamage(5);
	bartolo.beRepaired(3);

	// Drain energy
	for (int i = 0; i < 10; ++i)
		bartolo.attack("Juancar");

	// Test damage to death
	philip.takeDamage(20);
	philip.takeDamage(1);

	// Attempt to repair when dead
	philip.beRepaired(5);

	return 0;
}