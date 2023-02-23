#include <fstream>
#include <iostream>
#include <string>

// File input/output is just like console input/output!
//std::cout << wins;

int main()
{
	std::cout << "Please enter a file name." << std::endl;
	std::string fileName;
	std::getline(std::cin, fileName);
	fileName += ".txt";

	std::ofstream outFile(fileName);
	int wins = 4, loses = 5, draws = 6;
	outFile << wins << " " << loses << " " << draws << " ";
	outFile.close();

	std::ifstream inFile(fileName);
	wins = -1; loses = -1; draws = -1;
	inFile >> wins >> loses >> draws;
	inFile.close();

	outFile.open(fileName, std::ios::out | std::ios::trunc);

	return 0;
}
