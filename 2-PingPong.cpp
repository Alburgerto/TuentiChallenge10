#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>

//int main() 
//{
//	std::ifstream input("submitInput.txt");
//	std::ofstream output("testOutput.txt");
//
//	int games, cases, first, second, gameWinner, victory; // Number of games per case, first and second players in a round
//	std::unordered_map<int, int> victories;
//	std::pair<int, int> roundWinner;
//	std::string line;
//
//	input >> cases;
//	input.ignore();
//	for (int i = 0; i < cases; ++i) 
//	{
//		roundWinner = std::make_pair(-1, -1);
//		victories.clear();
//
//		input >> games;
//		input.ignore();
//		for (int j = 0; j < games; ++j) 
//		{
//			std::getline(input, line);
//			std::stringstream sstream(line);
//			sstream >> first >> second >> victory;
//
//			gameWinner = victory == 1 ? first : second;
//			auto entry = victories.find(gameWinner);
//			std::pair<int, int> winnerPair;
//
//			if (entry != victories.end())
//			{
//				entry->second++;
//				winnerPair = std::make_pair(entry->first, entry->second);
//			}
//			else
//			{
//				winnerPair = std::make_pair(gameWinner, 1);
//				victories.insert(winnerPair);
//			}
//
//			if (winnerPair.second > roundWinner.second)
//			{
//				roundWinner = std::make_pair(winnerPair.first, winnerPair.second);
//			}
//		}
//		output << "Case #" << i + 1 << ": " << roundWinner.first << std::endl;
//	}
//}