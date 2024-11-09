/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:32:24 by mkibous           #+#    #+#             */
/*   Updated: 2024/10/27 16:01:14 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string &filecontent, std::string s1, std::string s2)
{
    size_t index = filecontent.find(s1, 0);
    while (index != std::string::npos) {
        filecontent.erase(index, s1.size());
        filecontent.insert(index, s2);
        index = filecontent.find(s1, index + s2.size());
    }
} 
int main(int arc, char **arv)
{
    if (arc != 4 || arv[2][0] == '\0' )
        return (std::cout << "Inalid Arguments" << std::endl, 1);
    std::string filename = arv[1];
    std::string s1 = arv[2];
    std::string s2 = arv[3];
    std::string filecontent;
    std::string line = "";
    std::ifstream file(filename);
    if (!file.is_open())
        return (std::cout << "Error: Could not open the file!" << std::endl, 1);
    std::ofstream replacefile(filename + ".replace");
    if (!replacefile.is_open())
        return (std::cout << "Error: Could not create or open the file!" << std::endl, file.close(), 1);
    while (std::getline(file, line)){
        filecontent += line;
        if (!file.eof())
            filecontent += '\n';
    }
    replace(filecontent, s1, s2);
    replacefile << filecontent;
    file.close();
    replacefile.close();
}