#include <iostream>

using namespace std;

int main() {
	int age;
	
	cout << "Enter your age"<<endl;
	cin >> age;
	
//	age = age - 3;
	age -= 3;
	
	cout << "You should choose "<< age;
	return 0;
}
