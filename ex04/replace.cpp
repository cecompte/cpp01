/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:30:00 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 18:20:05 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace( std::string content, std::string s1, std::string s2 )
{
	if (s1.empty() || content.empty())
		return (content);

	size_t len_s1 = s1.size();
	size_t len_s2 = s2.size();
	size_t	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, len_s1);
		content.insert(pos, s2);
		pos += len_s2;
	}
	return (content);
}
