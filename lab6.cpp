#include <fstream>
#include <iostream>
#include <string>

int main()
{
	// 1. Prompt user for a file name.
	std::cout << "Please enter a file name." << std::endl;
	std::string fileName;
	std::getline(std::cin, fileName);
	fileName += ".txt";

	// 2. Test if the file already exists (is_open() == true). Handle operations accordingly.
	int wins, loses, draws;
	std::ifstream inFile(fileName);
	if (inFile.is_open())
	{
		std::cout << "Successfully opened " << fileName << std::endl;
		std::cout << "Reading the previous game's score..." << std::endl;
		inFile >> wins >> loses >> draws;
		std::cout << "Wins: " << wins << std::endl << "Loses: " << loses << std::endl << "Draws: " << draws << std::endl;

		// (You may want to truncate existing files after reading in their data for assignment 1.
		// This way there will only ever be 1 set of data in your files!)
		// std::ofstream outFile.open(fileName, std::ios::out | std::ios::trunc);
	}
	else
	{
		std::cout << fileName << " not found. Now creating " << fileName << std::endl;
		std::cout << "Starting a new game with a score of 0..." << std::endl;
		wins = loses = draws = 0;
		std::cout << "Wins: " << wins << std::endl << "Loses: " << loses << std::endl << "Draws: " << draws << std::endl;
	}
	
	// 3. Create/open existing file and write to it.
	std::ofstream outFile(fileName);
	outFile << wins << " " << loses << " " << draws << " ";
	outFile.close();

	return 0;
}
