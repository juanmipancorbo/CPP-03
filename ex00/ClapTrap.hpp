/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:40:52 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/25 18:56:49 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


# include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		ClapTrap(const std::string &name);				//Constructor
		ClapTrap(const ClapTrap &other);				//Copy constructor
		ClapTrap & operator=(const ClapTrap &other);	//Copy assignment operator
		~ClapTrap();									//Destructor

		//Getters & Setters
		std::string	get_name() const;
		std::string	get_hitPoints() const;
		std::string	get_energyPoints() const;
		std::string	get_attackDamage() const;
		void		set_name(const std::string &name);
		void		set_hitPoints(const int &hitPoints);
		void		set_energyPoints(const int &energyPoints);
		void		set_attackDamage(const int &attackDamage);

		//Other functions
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP