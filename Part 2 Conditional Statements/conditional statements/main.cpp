#include <iostream>

using namespace std;

int main()
{   // life starts

    cout << "And the program starts here....!"<< endl;

    cout << "Please tell me if the user is valid or not, press 0 for not and rest for yes.." << endl;

    bool isValid;
    cin >> isValid;


    if (isValid == true)
    {   // Life starts from here
        cout << "The user is valid" << endl;
    }   // ends or dies
    else {
        // if and only if the if condition is false
        cout << "The user is not valid"<<endl;

    }
    cout << "Our program terminates here !" << endl;
    return 0;
}   // life ends
