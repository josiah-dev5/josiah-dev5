#include <iostream>
using namespace std;

// Function declarations
void start();
void hallway();
void storage();
void exitDoor();

// Global variable (tracks key)
bool hasKey = false;

// main
int main() {
    start();
    return 0;
}

// starting point
void start() {
    int choice;

    cout << "You wake up in a strange building..." << endl;
    cout << "There is a hallway ahead." << endl;
    cout << "1. Go to hallway" << endl;
    cout << "2. Stay here" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        hallway();
    } else {
        cout << "You wait... nothing happens. You must move!" << endl;
        start();
    }
}

// hallway room
void hallway() {
    int choice;

    cout << "\nYou are in a hallway." << endl;
    cout << "There is a storage room and an exit door." << endl;
    cout << "1. Go to storage room" << endl;
    cout << "2. Try exit door" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        storage();
    } else if (choice == 2) {
        exitDoor();
    } else {
        cout << "Invalid choice." << endl;
        hallway();
    }
}

// storage room (key location)
void storage() {
    int choice;

    cout << "\nYou enter the storage room." << endl;
    cout << "You see a key on a table." << endl;

    if (!hasKey) {
        cout << "1. Pick up key" << endl;
        cout << "2. Go back to hallway" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            hasKey = true;
            cout << "You picked up the key!" << endl;
            storage();
        } else {
            hallway();
        }
    } else {
        cout << "1. Go back to hallway" << endl;
        cout << "Choice: ";
        cin >> choice;
        hallway();
    }
}

// exit door (locked)
void exitDoor() {
    int choice;

    cout << "\nYou are at the exit door." << endl;

    if (hasKey) {
        cout << "You use the key to unlock the door." << endl;
        cout << "You escaped! YOU WIN!" << endl;
    } else {
        cout << "The door is locked." << endl;
        cout << "1. Go back to hallway" << endl;
        cout << "Choice: ";
        cin >> choice;
        hallway();
    }
}