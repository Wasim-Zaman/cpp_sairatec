#include <iostream>

using namespace std;

int main()
{
    /*
        CRITERIA:
        If the person has height greater than 5.5 feet, and age greater than or equal
        to 18 and also if he has completed FSc then he is Eligible for the position
    */

    int age;
    float height;

    bool hasCompletedFsc;
    bool hasBsCompleted;

    cout << "Please enter your age"<<endl;
    cin >> age;

    // Height section
    cout << "Please enter your exact height"<< endl;
    cin >> height;

    // Education section
    cout << "Have you completed your Fsc, type 0 for no and rest for yes" << endl;
    cin >> hasCompletedFsc;

    cout << "Have you completed your BS Degree, type 0 for no and rest for yes" << endl;
    cin >> hasBsCompleted;

    // Defining the criteria
    bool criteria = (age >= 18 && height > 5.5f && hasCompletedFsc == true) || hasBsCompleted == true;

    cout << "Your selection criteria is : " << criteria << endl;
    return 0;
}
