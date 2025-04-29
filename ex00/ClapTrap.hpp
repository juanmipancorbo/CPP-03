/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:40:52 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/29 19:03:28 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	
	public:
		ClapTrap();										// Default constructor
		ClapTrap(const std::string &name);				// Name Constructor
		ClapTrap(const ClapTrap &other);				// Copy constructor
		ClapTrap & operator=(const ClapTrap &other);	// Copy assignment operator
		~ClapTrap();									// Destructor

		// Other functions
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP