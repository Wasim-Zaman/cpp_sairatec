# include <iostream>

using namespace std;

int main() {
	
	int age;
	cout << "Please enter your age" << endl;
	cin >> age;
	
	
	bool isAdult = age >= 14;
	
	cout << isAdult << endl; 
	return 0;
}
