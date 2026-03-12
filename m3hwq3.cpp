// CSC 134
// M3HWQ3
// Josiah
// 3/12/26

#include <iostream>
using namespace std;

int main () {
    string answer1;
    string answer2;

    cout << "You are in the woods alone on a dark path, do you go left or right" << endl;
    cin >> answer1;
    
    if (answer1 == "left") {
        cout << "You start your journey down the left path, and immidiately fall into a pit" << endl;
        cout << "Game Over" << endl;
    }
    else if (answer1 == "right") {
        cout << "You begin down the right path and get ambushed by a group of wolves" << endl;
        cout << "Do you run or use your ult" << endl;
        cin >> answer2;
    }
    else if (answer1 != "left" && answer1 != "right") {
        cout << "Not an option, try again" << endl;
    }

    if (answer2 == "run") {
        cout << "You try to run but the wolves immidiately catch you and eat you alive" << endl;
        cout << "Defeat" << endl;
    }
    else if (answer2 == "ult") {
        cout << "You popped ult and obliterated the pack with a supersonic force of energy dispersed from your body" << endl;
        cout << "Victory" << endl;
    }
    else if (answer2 != "run" && answer2 != "ult") {
        cout << "Not an option, try again" << endl;
    }

}
