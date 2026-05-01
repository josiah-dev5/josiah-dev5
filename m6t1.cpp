/*
CSC 134
M6T1 - Loops and Arrays
Josiah
05/01/26

Do the same thing with while and for loops, for reference.
*/

#include <iostream>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of cars per day, two different ways
    method1();
    method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - no arrays
    // Count 5 days cars, get total and average
    cout << "Enter number of cars per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;

    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int cars_total = 0;
    double cars_avg = 0;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;

        cars_total += cars_today;
        count++; // Move to next day
    }

    cout << "Total = " << cars_total << endl;
    cars_avg = (double) cars_total / SIZE;
    cout << "Average = " << cars_avg << endl;
}

void method2() {
    // Method 2 uses arrays:
    // Names of the days
    // # cars counted each day

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    int cars[SIZE];
    int cars_total = 0;
    double cars_avg = 0.0;

    // Input
    for (int i = 0; i < SIZE; i++) {
        cout << "# cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    // Table output
    cout << "Day\tCars" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        cars_total += cars[i];
    }

    // Total + average
    cars_avg = (double) cars_total / SIZE;
    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;

    // ASCII bar graph
    cout << "\nCar Traffic Graph:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << ": ";

        int stars = cars[i] / 10; // scale: 1 * = 10 cars

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << " (" << cars[i] << ")" << endl;
    }
}