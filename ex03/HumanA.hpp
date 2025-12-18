/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:49 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 15:10:10 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA( std::string str, Weapon& someWeapon );
	void			attack();
private:
	std::string		name;
	Weapon&			weaponA;
};

#endif
