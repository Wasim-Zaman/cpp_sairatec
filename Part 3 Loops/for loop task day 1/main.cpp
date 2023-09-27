#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "Enter starting number" << endl;
    cin >> start;

    cout << "Enter ending number"<< endl;
    cin >> end;

    cout << "The odd numbers between "<< start << " and " << end << " = ";

    for (; start <= end; start++)
    {
        if (start % 2 == 1)
        {
            if (start < end - 1)
            {
                cout << start << ",";
            }else{
                cout << start;
            }
        }
    }
    return 0;
}
