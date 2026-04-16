// CSC 134
// M5HW1
// Josiah
// 4/16/26

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void q1();
void q2();
void q3();
void q4();
void q5();

int main() {
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1. Rainfall Average\n";
        cout << "2. Block Volume\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            q1();
        }
        else if (choice == 2) {
            q2();
        }
        else if (choice == 3) {
            q3();
        }
        else if (choice == 4) {
            q4();
        }
        else if (choice == 5) {
            q5();
        }
        else if (choice == 6) {
            cout << "Goodbye\n";
        }
        else {
            cout << "Invalid choice\n";
        }

    } while (choice != 6);

    return 0;
}

// Question 1
void q1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    cout << "Rain for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Rain for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Rain for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Average rainfall: " << avg << endl;
}

// Question 2
void q2() {
    double w, l, h;

    cout << "Width: ";
    cin >> w;
    cout << "Length: ";
    cin >> l;
    cout << "Height: ";
    cin >> h;

    if (w <= 0 || l <= 0 || h <= 0) {
        cout << "Sides must be > 0\n";
    }
    else {
        cout << "Volume: " << w * l * h << endl;
    }
}

// Question 3
void q3() {
    int n;
    cout << "Enter number (1-10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Invalid\n";
    }
    else {
        if (n == 1) cout << "I\n";
        else if (n == 2) cout << "II\n";
        else if (n == 3) cout << "III\n";
        else if (n == 4) cout << "IV\n";
        else if (n == 5) cout << "V\n";
        else if (n == 6) cout << "VI\n";
        else if (n == 7) cout << "VII\n";
        else if (n == 8) cout << "VIII\n";
        else if (n == 9) cout << "IX\n";
        else if (n == 10) cout << "X\n";
    }
}

// Question 4
void q4() {
    int c;
    double r, l, w, b, h;

    cout << "\n1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "4. Quit\n";
    cout << "Choice: ";
    cin >> c;

    if (c == 1) {
        cout << "Radius: ";
        cin >> r;
        if (r < 0) {
            cout << "No negatives\n";
        }
        else {
            cout << "Area: " << 3.14159 * r * r << endl;
        }
    }
    else if (c == 2) {
        cout << "Length: ";
        cin >> l;
        cout << "Width: ";
        cin >> w;

        if (l < 0 || w < 0) {
            cout << "No negatives\n";
        }
        else {
            cout << "Area: " << l * w << endl;
        }
    }
    else if (c == 3) {
        cout << "Base: ";
        cin >> b;
        cout << "Height: ";
        cin >> h;

        if (b < 0 || h < 0) {
            cout << "No negatives\n";
        }
        else {
            cout << "Area: " << b * h * 0.5 << endl;
        }
    }
    else if (c == 4) {
        return;
    }
    else {
        cout << "Invalid choice\n";
    }
}

// Question 5
void q5() {
    double speed;
    int time;

    cout << "Speed: ";
    cin >> speed;
    cout << "Hours: ";
    cin >> time;

    if (speed < 0 || time < 1) {
        cout << "Invalid input\n";
    }
    else {
        cout << "Hour  Distance\n";
        for (int i = 1; i <= time; i++) {
            cout << i << "     " << speed * i << endl;
        }
    }
}