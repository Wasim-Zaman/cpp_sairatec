#include <iostream>

using namespace std;

int main(){
	
	int a = 0;
	int b = 1;
	
	// all i need is to swap the values of a and b
	
	// for that, i will need one extra temporary var
	
	int temp;		// empty is not equal to int
	
	temp = a;
	a = b;
	b = temp;
	
	// and hense......
	cout << a; 
	cout << endl; 
	cout << b;	
	
	// the program terminates here..
	return 0;
}
