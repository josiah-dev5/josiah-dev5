// CSC 134
// M3HWQ1
// Josiah
// 3/12/26

#include <iostream>
using namespace std;

int main() {
    string answer;

    // question
    cout << "Hello I'm a C++ Program" << endl;
    cout << "Do you like me? Type yes or no" << endl;

    //user response
    cin >> answer;

    // response to the user
    if (answer == "yes") {
        cout << "Aww, I like you too!" << endl;
    }
    else if (answer == "no") {
        cout << "I was gonna beat you anyways" << endl;
    }
    else {
        cout << "That wasn't an option, you must be confessing your undying love for me" << endl;
     }
    
     return 0;
}