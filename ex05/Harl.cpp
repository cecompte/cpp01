/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:51:02 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 16:48:47 by cecompte         ###   ########.fr       */
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
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain( std::string level )
{
	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*functions[i])();
	}
}