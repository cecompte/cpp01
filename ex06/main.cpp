/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:48:09 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 17:01:50 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	 main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Wrong nb of arguments\n", 1);

	Harl		newHarl;
	std::string level = argv[1];

	newHarl.filter(level);
	return (0);
}