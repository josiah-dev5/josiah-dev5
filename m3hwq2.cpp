// CSC 134
// M3HWQ2
// Josiah
// 3/12/26

#include <iostream>
using namespace std;

int main() {
    
    double meal_price;
    double tax;
    double tip = 0;
    double total;
    int order_type;

    const double TAX_RATE = 0.08;
    const double TIP_RATE = 0.15;

    // Ask for meal price
    cout << "Enter the price of the meal: $";
    cin >> meal_price;

    // Ask if dine in or takeaway
    cout << "Enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> order_type;

    // Calculate tax
    tax = meal_price * TAX_RATE;

    // If dine in, add tip
    if (order_type == 1) {
        tip = meal_price * TIP_RATE;
    }

    // Calculate total
    total = meal_price + tax + tip;

    // Print receipt
    cout << endl;
    cout << "------ Receipt ------" << endl;
    cout << "Meal Price: $" << meal_price << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "---------------------" << endl;
    cout << "Total: $" << total << endl;

    return 0;
}