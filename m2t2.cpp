// CSC 134
// M2T2
// Josiah
// 2/18/26

#include <iostream>
#include <iomanip> // 2 decimals
using namespace std;

int main () {
    // receipt
    // sales tax (8%)

    // variables
    string item = "🍕 Pizza";
    double item_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;
    
    // greet user and take order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // meal price

    

    // sales tax and total price
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;




    // print receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t$" << item_price;
    cout << "Tax" << "\t\t$" << tax_amount;
    cout << "------------------------------" << endl;
    cout << "Total" << "\t\t$" << total << endl;

    cout << endl;


    return 0;
}