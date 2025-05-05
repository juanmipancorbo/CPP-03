/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:21:17 by jpancorb          #+#    #+#             */
/*   Updated: 2025/05/05 19:01:21 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();										// default constructor
		FragTrap(const std::string &name);				// name constructor
		FragTrap(const FragTrap &other);				// copy constructor
		FragTrap & operator=(const FragTrap &other);	// copy assignment
		~FragTrap();									// destructor

		void	highFivesGuys(void);					// special ability
};

#endif // CLAPTRAP_HPP