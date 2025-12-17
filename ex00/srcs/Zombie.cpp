/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:01:05 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 18:55:09 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce() {
	std::cout << this->name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str) {
	this->name = str;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " is destroyed." << std::endl;
}
