#include <iostream>

using namespace std;

int main()
{
    int factors =0;
    int n;
    cout << 7254 % 10 << endl << 7254 / 10 << endl;
    cout << "Enter a number to check whether it is prime number or not: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }

    if (factors == 2)
    {
        cout << "The number is prime number\n";
    } else {
        cout << "The number is not a prime number\n";
    }
    return 0;
}
