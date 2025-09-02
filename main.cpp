#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>\n";
		return (1);
	}

	const std::string	filename = argv[1];
	const std::string	newFilename = filename + ".replace.txt" ;
	const std::string	to_search = argv[2];
	const std::string	to_replace = argv[3];

	if (to_search.empty())
	{
		std::cerr << "Error: s1 cannot be empty!\n";
		return (1);
	}

	std::string			line;

	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open the " << filename << "\n";
		return (1);
	}

	std::ofstream	outfile(newFilename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: " << newFilename << " cannot be created!\n";
		return (1);
	}

	while (std::getline(infile, line))
	{
		outfile << replacer(line, to_search, to_replace);
		if (!infile.eof())
			outfile << std::endl;
	}
	outfile.close();

	return (0);
}
