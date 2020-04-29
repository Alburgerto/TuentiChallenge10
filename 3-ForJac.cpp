#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <cctype>
#include <array>

const std::string m_allowedChars { "ABCDEFGHIJKLMNÑOPQRSTUVWXYZÁÉÍÓÚÜabcdefghijklmnñopqrstuvwxyzáéíóúü" };
std::unordered_map<std::string, int> m_words;

char convertChar(char l_char) 
{
	auto iterator = m_allowedChars.find(l_char);
	if (iterator == m_allowedChars.npos) // invalid char
	{
		return ' ';
	}
	else 
	{
		return std::tolower(l_char);
	}
}

void parseBook() 
{
	std::ifstream book("FortunataJacinta.txt");
	std::string word;
	while (book.good()) 
	{
		book >> word;
		std::transform(word.begin(), word.end(), word.begin(), [](char c) { return convertChar(c); });
		word.erase(std::remove_if(word.begin(), word.end(), isspace), word.end()); // Erase spaces in words

		auto wordIterator = m_words.find(word);
		if (wordIterator == m_words.end() && word.length >= 3) 
		{
			m_words.insert(std::make_pair(word, 1));
		}
		else 
		{
			wordIterator->second++;
		}
	}
}
int main() 
{
	std::ifstream input("testInput.txt");
	std::ofstream output("testOutput.txt");

	parseBook();
}