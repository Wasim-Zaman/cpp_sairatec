#include <iostream>

using namespace std;

int main(){
	
	int maths, physics, chemistry;
	
	cout << "Enter the marks of maths" << endl;
	cin >> maths;
	
	cout << "Enter the marks of physics" << endl;
	cin >> physics;
	
	cout << "Enter the marks of chemistry" << endl;
	cin >> chemistry;
	
	float average = (float) (maths + physics + chemistry) / 3;
	
	cout << endl << endl << "The average = " << average << endl;
}
