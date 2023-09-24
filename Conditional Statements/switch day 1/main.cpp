#include <iostream>

using namespace std;

int main()
{
    int caseNumber;
    cout << "1. Hello" << endl << "2. Bye" << endl;
    cin >> caseNumber;

    switch (caseNumber)
    {
    case 1:
        cout << "Hello" << endl;
        break;
    case 2:
        cout << "Bye" << endl;
        break;
    default:
        cout << "You choosed wrong case" <<endl;
    }

    cout << "The program terminates here"<<endl;

    return 0;
}
