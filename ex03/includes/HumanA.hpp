/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:49 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 20:22:30 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


class HumanA {
public:
	HumanA( std::string str, Weapon W);
	Weapon			WeaponA;
	void			attack();
private:
	std::string		name;
}
