#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter a number to calculate sum of all these numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of " << n << " natural numbers = " << sum;
    return 0;
}


