#include "replace.hpp"

void	findAndReplace(std::string& buffer, std::string s1, std::string s2)
{
	size_t	pos = 0;
	while ((pos = buffer.find(s1, pos)) != std::string::npos){
		buffer.erase(pos, s1.length());
		buffer.insert(pos, s2);
		pos += s2.length();
	}
}

std::string fileIntoString(std::fstream &inFile){
	std::string fileContents((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
	return fileContents;
}