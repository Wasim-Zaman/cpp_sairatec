#include <iostream>

using namespace std;

int main()
{
    /*
        CRITERIA:
        If the person has height greater than 5.5 feet, and age greater than or equal
        to 18 and also if he has completed FSc then he is Eligible for the position of army

        OR

        If someone is having BS degree, then also he is eligible
    */

    int age;
    float height;

    bool hasCompletedFsc;

    cout << "Please enter your age"<<endl;
    cin >> age;

    // Height section
    cout << "Please enter your exact height"<< endl;
    cin >> height;

    // Education section
    cout << "Have you completed your Fsc, type 0 for no and rest for yes" << endl;
    cin >> hasCompletedFsc;


    // Defining the criteria
    bool criteria = (age >= 18 && height > 5.5f && hasCompletedFsc == true);

    if (criteria == true)
    {
        cout << "You are eligible for the current position in army"<<endl;
    }
    else
    {
        cout << "you are not eligible for the mentioned position"<<endl;
    }
    return 0;
}
