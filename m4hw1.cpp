// CSC 134
// M4HW1
// Josiah
// 3/28/26

#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Input validation loop
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    while (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12: ";
        cin >> number;
    }

    // Times table loop
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}