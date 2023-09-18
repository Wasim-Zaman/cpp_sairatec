#include <iostream>

using namespace std;

int main()
{
    int physics, maths, cs, islamyat, english, urdu;

    cout << "Enter physics marks: "; cin >> physics;
    cout << "Enter maths marks: "; cin >> maths;
    cout << "Enter cs marks: "; cin >> cs;
    cout << "Enter islamyat marks: "; cin >> islamyat;
    cout << "Enter english marks: "; cin >> english;
    cout << "Enter urdu marks: "; cin >> urdu;

    int marks = physics + maths + cs +islamyat + english + urdu;

    cout << "Total marks = " << marks << endl << endl << endl;

    // A1 grade
    if (marks >= 990 && marks <= 1100){
        cout << "Student got A1 grade"<<endl;
    }

    // A grade
    else if (marks >= 880 && marks < 990){
        cout << "Student got A grade"<<endl;
    }

    // B grade
    else if (marks >= 770 && marks < 880) {
        cout << "Student got B grade"<<endl;
    }

    else if (marks >= 660 && marks < 770) {
        cout << "Student got C grade"<<endl;
    }
    else if (marks >= 550 && marks < 770) {
        cout << "Student got D grade"<<endl;
    }
    else if (marks >= 440 && marks < 550) {
        cout << "Student got E grade"<<endl;
    }
    else {
        cout << "Student failed !" << endl;
    }


    return 0;
}
