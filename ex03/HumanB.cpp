/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:29:58 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 15:26:49 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string str ) {
	this->name = str;
}

void	HumanB::attack() {
	std::cout << this->name << ": attacks with their " << this->weaponB->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& someWeapon ) {
	this->weaponB = &someWeapon;
}

