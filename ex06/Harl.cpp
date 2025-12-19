/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:51:02 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 17:11:37 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\nI love having extra veganaise for my vegan burger. I really do!\n\n";
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\nI cannot believe adding extra veganaise costs more money. You didn't put enough veganaise in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra veganaise for free. I've been coming for years, whereas you started working here just last month.\n\n";
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::filter( std::string level )
{
	int index = 0;

	if (level == "DEBUG")
		index = 1;
	else if (level == "INFO")
		index = 2;
	else if (level == "WARNING")
		index = 3;
	else if (level == "ERROR")
		index = 4;
	
	switch (index) {
		case 1:
			this->debug();
		case 2:
			this->info();
		case 3:
			this->warning();
		case 4:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}