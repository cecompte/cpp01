/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:22:07 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 12:24:41 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

std::string	readFile( std::ifstream& inputFile );
std::string replace( std::string content, std::string s1, std::string s2 );

#endif