// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() { 

    int hasExp; 
    bool hasBsCompleted;
    
    cout << "Enter your C++ Experience: "; 
    cin >> hasExp; 
    
    cout << "Have you completed your graduation ?";
    cin >> hasBsCompleted;
    
    bool eligible = hasExp >= 2 && hasBsCompleted == true; 
    
    cout << eligible;
    
    

    return 0;
}
