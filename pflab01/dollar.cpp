#include<iostream>
#include<string>

using namespace std;

int main()
{
	float rupee;
	int dollar;
	cout << "enter Dollar: " << endl;
	cin >> dollar;
	rupee = dollar * 278.10 ;
	cout << "The dollar in rupee is: ";
	cout << rupee << endl;

	return 0;
}
