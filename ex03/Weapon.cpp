/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:12:52 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 15:15:55 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {
	std::cout << "Weapon constructor called\n";
	this->type = "";
}

Weapon::Weapon( std::string str ) {
	this->type = str;
}

const std::string&	Weapon::getType() {
	return (this->type);
}

void	Weapon::setType( std::string str ) {
	this->type = str;
}
