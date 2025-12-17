/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:25:12 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 19:36:38 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie( void );
	Zombie( std::string str );
	~Zombie( void );
	void 			announce( void );
	void			setName( std::string str );
private:
	std::string		name;
};

Zombie* zombieHorde( int N, std::string name );

#endif