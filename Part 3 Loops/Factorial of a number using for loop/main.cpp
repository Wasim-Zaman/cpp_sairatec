#include <iostream>

using namespace std;

int main()
{
    int fact = 1;
    int num;
    cout << "Enter a number to find its factorial\n";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }

    cout << "The factorial of " << num << " = " << fact;
    return 0;
}
