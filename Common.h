#pragma once
#include <iostream>
#include <string>

using namespace std;

int EnterNumber(string name, string stat)
{
	int health = 0;
	cout << "Please enter the " << name << "'s " << stat << ":" << endl;
	cin >> health;
	return health;
}
