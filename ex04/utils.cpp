/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:21:45 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 12:24:03 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	readFile( std::ifstream& inputFile )
{
	std::string content;
	std::string line;
	while (std::getline(inputFile, line)) {
		content += line;
		if (!inputFile.eof())
			content += '\n';
	}
	inputFile.close();
	return (content);
}

std::string replace( std::string content, std::string s1, std::string s2 )
{
	if (s1.empty() || s2.empty() || content.empty())
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


