// CSC 134
// M3Lab1
// Josiah
// 3/9/26

#include <iostream>
#include <cctype>
using namespace std;

int main () {

    char choice;

    // explain scenario
    cout << "A strange man walks up to you and asks what size shoe you wear." << endl;
    cout << "What do you do?" << endl;
    cout << "A, tell him your shoe size" << endl;
    cout << "B, immediately run away" << endl;
    cout << "C, ask him why he wants to know" << endl;
     cout << "D, say \"my size\"" << endl;
    cout << "E, punch him in the face" << endl;
    cin >> choice;
    choice = toupper(choice);

    // response

    if ('A' == choice) {
  	cout << "You chose to tell him your shoe size" << endl;
    cout << "He robs you at gunpoint" << endl;
    cout << "Dude, you're stupid" << endl;
  }
  else if ('B' == choice) {
  	cout << "You chose to run away" << endl;
    cout << "He shoots you in the back and robs you while you bleed out" << endl;
    cout << "I don't even know bro, try zig zags next time" << endl;
  }
  else if ('C' == choice) {
  	cout << "You chose to ask him why he wants to know" << endl;
    cout << "He immediately pistol whips you and robs you" << endl;
    cout << "Why would you ever do that?" << endl;
  }
  else if ('D' == choice) {
  	cout << "You chose to say \"my size\"" << endl;
    cout << "He shoots you and robs you" << endl;
    cout << "Maybe don't try to be Mr. Tough Guy???" << endl;
  }
  else if ('E' == choice) {
  	cout << "You chose to punch him in the face" << endl;
    cout << "You miss and he shoots you in the face and then robs your dead body" << endl;
    cout << "Yikes" << endl;
  }
  else {
  	cout << "I literally never said that was an option." << endl;
  }

  cout << "Well, I hope you don't do this in real life" << endl;
  cout << "Goodbye now!" << endl;

return 0;
}