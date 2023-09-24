#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    float result = 0;



    cout << "Enter two numbers" <<endl;
    cin >> num1 >> num2;

    cout << "Which operation do you want to perform on the given two numbers" << endl;
    cout << "1. +" << endl << "2. -" <<endl << "3. *" << endl << "4. /"<<endl;

    char operation;
    cin >> operation;

    if (operation == '+')
    {
        result = num1 + num2;
        cout << "You choosed + operator ";
    }
    else if (operation == '-')
    {
        result = num1 - num2;
        cout << "You choosed - operator ";
    }
    else if (operation == '*')
    {
        result = num1 * num2;
        cout << "You choosed * operator ";
    }
    else if (operation == '/')
    {
        result = num1 / num2;
        cout << "You choosed / operator ";
    }
    else
    {
        cout << "Please choose only one of the mentioned operator"<<endl;
    }

    cout << "Result is equal to " << result << endl;


    return 0;
}
