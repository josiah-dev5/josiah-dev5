// CSC 134
// M5Lab1
// Josiah
// 4/1/26

#include <iostream>
using namespace std;

// Functions
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

int main() {
    main_menu();
    return 0;
}

// Main menu function
void main_menu() {
    int choice;

    do {
        cout << "\n--- Choose Your Own Adventure ---\n";
        cout << "1. Go to the front door\n";
        cout << "2. Sneak around to the back door\n";
        cout << "3. Go home\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            choice_front_door();
        }
        else if (choice == 2) {
            choice_back_door();
        }
        else if (choice == 3) {
            choice_go_home();
        }
        else if (choice == 4) {
            cout << "Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

        if (choice != 4) {
            cout << "\nPress Enter to continue...";
            cin.ignore(1000, '\n'); 
            cin.get();             
        }

    } while (choice != 4);
}

// Story branch 1
void choice_front_door() {
    cout << "\nYou walk up to the front door and knock...\n";
    cout << "A mysterious person opens it and stares at you.\n";
    cout << "You suddenly feel nervous and run away.\n";
}

// Story branch 2 
void choice_back_door() {
    cout << "\nYou sneak around to the back door...\n";
    cout << "The door is slightly open.\n";
    cout << "You step inside and hear strange noises.\n";
    cout << "You decide it's too creepy and leave quickly.\n";
}

// Story branch 3 
void choice_go_home() {
    cout << "\nYou decide it's not worth it and go home.\n";
    cout << "You relax, watch TV, and forget about the whole thing.\n";
}