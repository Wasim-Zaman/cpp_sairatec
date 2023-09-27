#include <iostream>

using namespace std;

int main()
{
    int table = 0;
    cout << "Enter a number to create a table" << endl;
    cin >> table;

    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * " << i << " = " << table * i;
        cout << endl;
    }
    return 0;
}
