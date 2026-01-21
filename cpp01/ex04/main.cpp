/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 21:20:35 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 21:20:35 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string line;
	std::string nameFile;
	std::string search;
	std::string replace;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (argc != 4 || !argv[2] || !argv[3])
	{
		std::cerr << "Argument required: file.txt search replace\n";
		return (1);
	}
	nameFile = argv[1];
	search = argv[2];
	replace = argv[3];
	if (nameFile.empty() || search.empty() || replace.empty()) 
	{
		std::cerr << "Arguments cannot be empty\n";
		return (1);
	}
	inputFile.open(nameFile.c_str(), std::ios::in);
	if (!inputFile.is_open())
	{
		std::perror(nameFile.c_str());
		return (1);
	}
	outputFile.open((nameFile + ".replace").c_str());
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		pos = line.find(search, pos);
		while (pos != (size_t)std::string::npos)
		{
			line = line.substr(0, pos) + replace + line.substr(pos + search.length());
			pos = line.find(search, pos + replace.length());
		}
		std::streampos posCursor = inputFile.tellg();
		if (posCursor == -1)
			outputFile << line;
		else
			outputFile << line << '\n';
	}
	inputFile.close();
	outputFile.close();
	return (0);
}