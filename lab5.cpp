#include <string>

using namespace std;

string Letters()
{
	return "Hello!";
}

char Letter()
{
	return 'Z';
}

double BigDecimal()
{
	return 0.00000000000000000000000001;
}

float Decimal()
{
	return 0.001f;
}

int Integer()
{
	return -100;
}

int main()
{
	int integer = Integer();
	float decimal = Decimal();
	double bigDecimal = BigDecimal();
	char letter = Letter();
	string letters = Letters();
	return integer;
}
