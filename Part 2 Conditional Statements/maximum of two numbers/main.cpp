#include <iostream>

using namespace std;

int main()
{
    /*
    I will catch two numbers from the user, then i will compare which number among
    the given two is greater.
    */
    int a, b;
    a = b = 0;

    cout << "Enter two numbers"<<endl;
    cin >> a >> b;

    // compare two numbers
    bool exp = a > b;
    if (exp) {
        cout << a << " is greater than " << b;
    }
    else {
        cout << b << " is greater than " << a;
    }

    return 0;
}
