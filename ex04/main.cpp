/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/18 18:04:15 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

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

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong nb of arguments\n";
		return (1);
	}
	//open and read filename
	std::string filename1 = argv[1];
	std::ifstream inputFile(filename1.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "failed to open" << filename1 << std::endl;
		return (1);
	}
	std::string inputContent = readFile( inputFile );
	std::cout << inputContent << std::endl;

    // create output file
	std::string filename2 = filename1.append(".replace");
	std::ofstream outputFile(filename2.c_str());
	if (!outputFile)
	{
		std::cout << "Error while creating the file" << std::endl;
		return (1);
	}

	// replace s1 with s2 in inputContent and write to outputFile
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	
	outputFile << inputContent;
	outputFile.close();
	return (0);
}
