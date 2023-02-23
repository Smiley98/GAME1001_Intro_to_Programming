#include <fstream>
#include <iostream>

// File input/output is just like console input/output!
//std::cout << wins;

int main()
{
	std::ofstream outFile("test.txt");
	int wins = 4, loses = 5, draws = 6;
	outFile << wins << " " << loses << " " << draws << " ";
	outFile.close();

	std::ifstream inFile("test.txt");
	wins = -1; loses = -1; draws = -1;
	inFile >> wins >> loses >> draws;

	return 0;
}
