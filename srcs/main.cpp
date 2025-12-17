/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 18:59:09 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie1;
	
	Zombie1 = newZombie("Jacques le chien");
	Zombie1->announce();
	delete Zombie1;
	
	randomChump("Sokaya");
}
