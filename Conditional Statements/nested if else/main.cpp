#include <iostream>

using namespace std;

int main()
{
    int age;
    float height;

    cout << "Please enter your age" << endl;    cin >> age;
    cout << "Please enter your height" << endl; cin >> height;


    // criteria
    bool criteria = age > 18 && height >= 5.5f;

    if (criteria) {
        cout << "Congrats.....! you are eligible for the mentioned position" << endl;

    } else {
        cout << "I am sorry...! you are not eligible for the mentioned position" << endl;

        // Reason
        if (age <= 18) {
            cout << "Because your age does not meet our criteria, your age is less than or equal to 18"<<endl;
        }
        if (height < 5.5f) {
            cout << "Because your height does not meet our criteria. your height is less than 5.5 feet"<<endl;
        }
    }

    return 0;
}
