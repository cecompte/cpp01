/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:25:12 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 19:19:35 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie( std::string str );
	~Zombie( void );
	void 			announce( void );
private:
	std::string		name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif