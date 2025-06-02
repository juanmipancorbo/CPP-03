/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:53:56 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/08 17:32:18 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();										// Default constructor
		ScavTrap(const std::string &name);				// Name Constructor
		ScavTrap(const ScavTrap &other);				// Copy constructor
		ScavTrap & operator=(const ScavTrap &other);	// Copy assignment operator
		~ScavTrap();									// Destructor

		// Other functions
		void		attack(const std::string &target);	// Override of method
		void		guardGate();
};

#endif // SCAVTRAP_HPP