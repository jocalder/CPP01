/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:05:38 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/21 19:02:22 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
		std::cerr << "Type: <filename> <s1> <s2> " << std::endl;
		return (1);
    }
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cerr << "Invalid string" << std::endl;
		return (1);
	}
	std::string	outputfile;
    std::string filename = argv[1];
    std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (s1.empty())
	{
		std::cerr << "Invalid string" << std::endl;
		return (1);
	}
	
	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Error: cannot open file" << filename << std::endl;
		return (1);
	}
	
}