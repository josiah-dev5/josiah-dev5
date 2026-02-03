/*
CSC 134
M1 Lab
josiahw
2/3/26
*/

#include <iostream>
using namespace std;

int main () {
    //cout << "Hello World!\n";
    string name = "Jane Smith";
    int apples = 100;
    double pricePerApple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;

    cout << "We have " << apples << " apples for sale" << endl;

    cout << "Price is $" << pricePerApple << " each." <<endl;
    
    // calculating total price
    double totalPrice = (double) apples * pricePerApple;
    cout << "Total price is: $" <<totalPrice <<endl;
}