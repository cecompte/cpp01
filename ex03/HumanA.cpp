/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:29:58 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 18:34:05 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string str, Weapon& someWeapon ) : weaponA(someWeapon) {
	this->name = str;
}

void	HumanA::attack() {
	std::cout << this->name << ": attacks with their " << this->weaponA.getType() << std::endl;
}


