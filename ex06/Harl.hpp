/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:48:24 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 16:54:38 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
private:
	void 	debug();
	void 	info();
	void 	warning();
	void 	error();
public:
	void	filter( std::string level );
};

#endif