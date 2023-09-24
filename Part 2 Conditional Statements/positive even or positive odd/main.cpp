#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;    cin >> num;

    if (num < 0) {
       // Negitive
       if (num % 2 == -1) {
            cout << "The number " << num << " is negative odd number"<<endl;
        }  else {
            cout << "The number " << num << " is negative even number"<<endl;
        }
    } else {
        // Positive
        if (num % 2 == 1) {
            cout << "The number " << num << " is positive odd number"<<endl;
        }  else {
            cout << "The number " << num << " is positive even number"<<endl;
        }
    }
    return 0;
}
