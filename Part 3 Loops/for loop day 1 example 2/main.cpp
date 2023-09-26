#include <iostream>

using namespace std;

int main()
{
    int limit;
    cout << "How many times do you want to execute loop? ";
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        cout << i << endl;
    }
    return 0;
}
