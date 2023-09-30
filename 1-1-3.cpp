#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float add(float a, float b)
{
	float result = a + b;

	return result;
}

float min(float a, float b)
{
	float result = a - b;

	return result;
}

float mul(float a, float b)
{
	float result = a * b;

	return result;
}

float div(float a, float b)
{
	float result = a / b;

	return result;
}

int namug(int a, int b)
{
	int result = a % b;

	return result;
}

int main()
{
	float num1, num2, addr, minr, mulr, divr, namugr ;
	cout << "Enter Two Numbers: ";
	cin >> num1;
	cin >> num2;
	cout << endl;

	addr = add(num1, num2);
	cout << endl;
	cout << num1;
	cout << " + ";
	cout << num2;
	cout << " = ";
	cout << addr;

	minr = min(num1, num2);
	cout << endl;
	cout << num1;
	cout << " - ";
	cout << num2;
	cout << " = ";
	cout << minr;

	mulr = mul(num1, num2);
	cout << endl;
	cout << num1;
	cout << " * ";
	cout << num2;
	cout << " = ";
	cout << mulr;

	divr = div(num1, num2);
	cout << endl;
	cout << num1;
	cout << " / ";
	cout << num2;
	cout << " = ";
	cout << divr;

	namugr = namug(num1, num2);
	cout << endl;
	cout << num1;
	cout << " % ";
	cout << num2;
	cout << " = ";
	cout << namugr;

	return 0;
}