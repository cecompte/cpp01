/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:48:09 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 16:44:01 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	 main()
{
	Harl	newHarl;

	std::cout << "DEBUG: ";
	newHarl.complain("DEBUG");
	std::cout << "INFO: ";
	newHarl.complain("INFO");
	std::cout << "WARNING: ";
	newHarl.complain("WARNING");
	std::cout << "ERROR: ";
	newHarl.complain("ERROR");
	return (0);
}