/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 12:32:34 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong nb of arguments\n";
		return (1);
	}
	std::string filename1 = argv[1];
	std::ifstream inputFile(filename1.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Error while opening file " << filename1 << std::endl;
		return (1);
	}
	std::string filename2 = filename1.append(".replace");
	std::ofstream outputFile(filename2.c_str());
	if (!outputFile)
	{
		std::cout << "Error while creating the file" << std::endl;
		return (1);
	}
	
	std::string inputContent = readFile( inputFile );
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	outputFile << replace(inputContent, s1, s2);
	outputFile.close();
	return (0);
}
