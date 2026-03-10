// CSC 134
// M3T1
// Josiah
// 3/9/26

// header
#include <iostream>
using namespace std;

int main () {
    // variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // user input
    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // calculate
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;
}