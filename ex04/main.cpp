#include <iostream>
#include <fstream>
#include <string>

std::string	replaceAll(const std::string& line, const std::string& to_replace,
	const std::string& new_string)
{
	if (to_replace.empty())
		return (line);

	std::string res = line;
	size_t pos = res.find(to_replace);

	while (pos != std::string::npos)
	{
		res.erase(pos, to_replace.length());
		res.insert(pos, new_string);
		pos += new_string.length();
		pos = res.find(to_replace, pos);
	}
	return (res);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <file> <to_replace> <new_string>" << std::endl;
		return (1);
	}

	std::string input_file = av[1];
	std::string to_replace = av[2];
	std::string new_string = av[3];
	std::string output_file = input_file + ".replace";

	std::ifstream inFile(input_file.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error : Failed to open the file" << std::endl;
		return (1);
	}

	std::ofstream outFile(output_file.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error : Failed to create the output file" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(inFile, line))
	{
		outFile << replaceAll(line, to_replace, new_string);
		if (!inFile.eof())
			outFile << "\n";
	}
	return (0);
}
