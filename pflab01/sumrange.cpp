#include<iostream>
#include<string>

using namespace std;

int main(){
	int a,b;
	cout << "Enter lower bound: ";
	cin >> a;
	cout << "Enter upper bound: ";
	cin >> b;
	
	int suma_minus1,sumb,sum_range;
	suma_minus1 = ((a-1)*a)/2;
	sumb = (b*(b+1))/2;
	sum_range = sumb - suma_minus1;
	
	cout << "The sum range from "<< a << " to " << b << "  is : "<< sum_range <<endl;
	
	return 0;
	
}
	
	
	