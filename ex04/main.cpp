#include <iostream>
#include <fstream>
#include <string>


int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <file> <to_replace> <new_string>" << std::endl;
		return (1);
	}
	std::fstream file(av[1]);
	if (!file.is_open())
	{
		std::cerr << "Error : Failed to open the file" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	filename += ".replace";
	std::ofstream newFile(filename.c_str());
	if (!newFile.is_open())
	{
		std::cerr << "Error : Failed to open the file" << std::endl;
		file.close();
		return (1);
	}
	std::string line;
	while (!file.eof())
	{
		std::getline(file, line);
		std::string to_replace = av[2];
		std::string	new_string = av[3];
		size_t pos = line.find(to_replace);
		while (pos != std::string::npos)
		{
			std::string before;
			std::string after;
			int	new_line_len = line.length() - (pos + to_replace.length());
			before = line.substr(0, pos);
			after = line.substr(pos + to_replace.length(), new_line_len);
			line = before + new_string + after;
			pos = line.find(to_replace);
		}
		if (!file.eof())
			newFile << line << std::endl;
		else
			newFile << line;
	}	file.close();
	newFile.close();
	return (0);
}