/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:12:52 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 18:34:57 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {
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
