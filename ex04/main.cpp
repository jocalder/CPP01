/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:05:38 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/24 13:10:19 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
		std::cerr << "Usage: ./replace <filename> <s1> <s2> " << std::endl;
		return (1);
    }
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cerr << "Invalid string" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string	outfile = filename + ".replace";
    std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (s1.empty())
	{
		std::cerr << "Invalid string" << std::endl;
		return (1);
	}
	
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: cannot open file" << filename << std::endl;
		return (1);
	}
	
	std::string content = "";
	std::string line;
	std::string result = "";
	size_t pos = 0;
	size_t replace;
	
	while (std::getline(infile, line))
	{
		content += line;
		content += "\n";
	}
	infile.close();
	while ((replace = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, (replace - pos));
		result += s2;
		pos = replace + s1.length();  
		replace = s2.length();
	}
	result += content.substr(pos);
	std::ofstream output(outfile.c_str());
	if (!output.is_open())
	{
		std::cout << "Error: cannot open file" << std::endl;
		return (1);
	}
	output << result;
	output.close();
	return (0);
}