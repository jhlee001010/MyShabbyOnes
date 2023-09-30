#include <iostream>

using namespace std;

int main() 
{

	string name, major;
	int stdnum;

	cout << "이름을 입력하세요 :";
	cin >> name;
	cout << "학번을 입력하세요 :";
	cin >> stdnum;
	cout << "전공을 입력하세요 :";
	cin >> major;
	cout << endl;

	cout << "이름:" ; 
	cout << name ;
	cout << endl;
	cout << "학번:";
	cout << stdnum;
	cout << endl;
	cout << "전공:";
	cout << major;

	return 0;

}