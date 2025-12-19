/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/19 15:42:26 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <sys/stat.h>

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

bool isDirectory(const std::string& path)
{
	struct stat fileInfo;
	if (stat(path.c_str(), &fileInfo) != 0)
		return (false);
	return (S_ISDIR(fileInfo.st_mode));
}

int main(int argc, char **argv)
{
	std::string filename1 = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (argc != 4)
		return (std::cout << "Wrong nb of arguments\n", 1);
	if (isDirectory(filename1))
		return (std::cout << "Error: " << filename1 << " is a directory\n", 1);

	std::ifstream inputFile(filename1.c_str());
	if (!inputFile.is_open())
		return (std::cout << "Error while opening file " << filename1 << std::endl, 1);

	std::string filename2 = filename1.append(".replace");
	std::ofstream outputFile(filename2.c_str());
	if (!outputFile)
		return (std::cout << "Error while creating the file" << std::endl, 1);

	std::string inputContent = readFile( inputFile );
	outputFile << replace(inputContent, s1, s2);
	outputFile.close();
	return (0);
}
