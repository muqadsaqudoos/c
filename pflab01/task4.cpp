#include<iostream>
#include<string>

using namespace std;

int main(){
	float p,q,f;
	cout << "Enter p: ";
	cin >> p;
	cout << "Enter q: ";
	cin >> q;
	
	f = 1/((1/p)+(1/q));
	
	cout << "The focal length of convex lens is: "<< f <<endl;
	
	return 0;
	
}
	
	
	