/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:19 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 14:10:38 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
public:
	Weapon();
	Weapon( std::string str);
	const std::string& 	getType();
	void				setType( std::string str);
private:
	std::string			type;
};

#endif