#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number to check if it is even or odd" <<endl;
    cin >> number;

    // Logic for even or odd
    int remainder = number % 2;

    if (remainder == 0) {
        cout << "The number " << number << " is even number" << endl;
    } else {
        cout << "The number " << number << " is odd number" << endl;
    }

    return 0;
}
