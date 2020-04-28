#include <iostream>
#include <fstream>
#include <sstream>


std::string rps_match(const std::string& l_first, const std::string& l_second)
{
	if ((l_first == "R" && l_second == "P") || (l_first == "P" && l_second == "R"))
	{
		return "P";
	}
	else if ((l_first == "R" && l_second == "S") || (l_first == "S" && l_second == "R"))
	{
		return "R";
	}
	else if ((l_first == "S" && l_second == "P") || (l_first == "P" && l_second == "S"))
	{
		return "S";
	}
	else
	{
		return "-";
	}
}

int main() 
{
	std::ifstream input("submitInput.txt");
	std::ofstream output("testOutput.txt");

	std::string line, first, second;

	int caseNumber;
	input >> caseNumber;
	input.ignore();
	for (int i = 0; i < caseNumber; ++i)
	{
		std::getline(input, line);
		std::stringstream sstream(line);
		sstream >> first >> second;

		output << "Case #" << i + 1 << ": " << rps_match(first, second) << std::endl;
	}
}


