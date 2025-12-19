/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:29:58 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 18:34:28 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string str ) : name(str) {}

void	HumanB::attack() {
	if (weaponB)
		std::cout << this->name << ": attacks with their " << this->weaponB->getType() << "\n";
	else
		std::cout << "Error : null pointer\n";
}

void	HumanB::setWeapon( Weapon& someWeapon ) {
	this->weaponB = &someWeapon;
}

