#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check which number can completely divide it: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The num "<< num << " is divisible by 2" << endl;
    }
    if (num % 3 == 0) {
        cout << "The num "<< num << " is divisible by 3" << endl;
    }
    if (num % 4 == 0) {
        cout << "The num "<< num << " is divisible by 4" << endl;
    }

    if (num % 5 == 0) {
        cout << "The num "<< num << " is divisible by 5" << endl;
    }
    if (num % 6 == 0) {
        cout << "The num "<< num << " is divisible by 6" << endl;
    }
    if (num % 7 == 0) {
        cout << "The num "<< num << " is divisible by 7" << endl;
    }
    if (num % 8 == 0) {
        cout << "The num "<< num << " is divisible by 8" << endl;
    }

    if (num % 9 == 0) {
        cout << "The num "<< num << " is divisible by 9" << endl;
    }



    return 0;
}
