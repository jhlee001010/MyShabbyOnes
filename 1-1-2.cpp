#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int add(float a, float b)
{
	float result = a + b;

	return result;
}

int main() 
{
	float num1, num2, re;
	cout << "두개의 수를 입력하세요: ";
	cin >> num1;
	cin >> num2;
	cout << endl;

	re = add(num1, num2);
	cout << endl;
	cout << "정답:";
	cout << re;

	return 0;
}