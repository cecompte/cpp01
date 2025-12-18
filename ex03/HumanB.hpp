/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:49 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 15:27:15 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB( std::string str );
	void			attack();
	void			setWeapon( Weapon& someWeapon );
private:
	std::string		name;
	Weapon*			weaponB;
};

#endif

