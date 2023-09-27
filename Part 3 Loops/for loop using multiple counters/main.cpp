#include <iostream>

using namespace std;

int main()
{
    for (int a = 1, b=1, c=1, d=1; a <= 10, b <= 10, c <= 10, d <= 10; ++a, ++b , ++c, ++d)
    {
        cout << "2 * " << a << " = " << 2 * a << "\t\t";
        cout << "3 * " << b << " = " << 3 * b << "\t\t";
        cout << "4 * " << c << " = " << 4 * c << "\t\t";
        cout << "5 * " << d << " = " << 5 * d << "\n";
    }
    return 0;
}
