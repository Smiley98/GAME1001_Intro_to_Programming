#include <string>
#include "IntegerMath.h"
#include "DecimalMath.h"

using namespace std;

string Letters();
char Letter();
double BigDecimal();
float Decimal();
int Integer();

int main()
{
	int sum = Add(1, 2);
	int difference = Sub(1, 2);
	int product = Mul(1, 2);
	int quotient = Div(1, 2);
	float decimalQuotient = Div(1.0f, 2.0f);
	return 0;
}

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

/*
int integer = Integer();
float decimal = Decimal();
double bigDecimal = BigDecimal();
char letter = Letter();
string letters = Letters();
*/