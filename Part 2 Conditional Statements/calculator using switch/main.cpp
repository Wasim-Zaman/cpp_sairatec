#include <iostream>

using namespace std;

int main()
{
    // Variables
    float num1, num2, result;
    char operation;

    cout << "Please enter two numbers....." <<endl; cin >> num1 >> num2;
    cout << "Choose one of the following operations"<<endl;
    cout << "+" <<endl << "-" <<endl << "*" << endl << "/" << endl; // semi colon
    cin >> operation;
    // Logical part
    // Handling cases with switch
    switch(operation)
    {
    case '+':   // colon
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "You choosed wrong operator, please choose one of the mentioned operator"<<endl;
    }

    cout << "since you choosed " << operation << " operator";
    cout << " so your result is " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}
