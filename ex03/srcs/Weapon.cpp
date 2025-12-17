/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:12:52 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 20:16:25 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType() {
	const std::string &ref = this->type;
	return (&ref);
}

void	Weapon::setType( std::string str ) {
	this->type = str;
}
