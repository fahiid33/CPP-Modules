/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:53:12 by fstitou           #+#    #+#             */
/*   Updated: 2022/12/11 20:19:36 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	search_and_replace(std::string line, std::string s1, std::string s2)
{
	int			pos;
	int			s1_len;
	int			line_len;	
	std::string ret;

	s1_len = s1.length();
	while ( (pos = line.find(s1)) != -1)
	{
		line_len = line.length();
		ret = line.substr(0, pos);
		ret = ret + s2;
		line =  line.substr(pos + s1_len, line_len);
	}
	ret = ret + line;
	// std::cout << ret << std::endl;
	std::ofstream ofs("replace.txt", std::ofstream::out);
	ofs << ret;
	ofs.close();
}

int main(int ac, char **av)
{
    std::string line;
    std::string real_line;

    if (ac == 4)
    {
        std::ifstream ifs(av[1]);
        if (ifs.is_open())
        {
            while (getline(ifs, line))
                real_line = real_line + line + '\n';
            if (!line[0])
                std::cout << "file is empty" << std::endl;
            real_line.resize(real_line.size() - 1);
            ifs.close();
        }
        else
        {
            std::cout << "Error : failed to open file" << std::endl;
            return (0);
        }
        search_and_replace(real_line, av[2], av[3]);
    }
    else
		std::cout << "error in parameters, USAGE : ./a.out <filename> <s1> <s2>" << std::endl;
	return (0);
}