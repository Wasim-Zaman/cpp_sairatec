// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() { 
	int age;
	float height;
	
	bool hasFscCompleted;
	bool hasBsCompleted;
	
	cout << "Please enter your age :";
	cin >> age;
	
	// Height
	cout << "Please enter your height :";
	cin >> height;
	
	// Education
	cout << "Have you completed your Fsc ? ";
	cin >> hasFscCompleted;
	
	cout << "Have you completed your BS degree ? ";
	cin >> hasBsCompleted;
	
	// Criteria
	bool criteria = (age >= 18 && height >= 5.5f && hasFscCompleted == true) || hasBsCompleted == true;
	
	cout << "Your Eligibility criteria = " << criteria << endl;
}
