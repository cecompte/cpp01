/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:01:05 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 19:18:35 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string str ) {
	this->name = str;
}

void	Zombie::announce() {
	std::cout << this->name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " is destroyed." << std::endl;
}
