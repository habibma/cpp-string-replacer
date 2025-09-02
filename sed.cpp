#include "sed.hpp"

std::string	replacer(std::string line, std::string s1, std::string s2)
{

	int	s2_length = s2.length();
	int	s1_length = s1.length();
	size_t s1_pos =  line.find(s1);

	while (s1_pos != std::string::npos)
	{
		line.erase(s1_pos, s1_length);
		line.insert(s1_pos, s2);
		s1_pos =  line.find(s1, s1_pos + s2_length);
	}
	return (line);
}