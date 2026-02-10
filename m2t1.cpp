// CSC 134
// M2T1 - Product Sales
// Josiah
// 2/10/26

#include <iostream>
#include <iomanip> // 2 decimals
using namespace std;


int main() {

    // variables
    string first_name, last_name, full_name; // holds customer name
    string product = "apples"; 
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;


    // customer greeting
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // how much they'd like to purchase
    cout << "How many " << product << " would you like today< ";
    cin >> amount_purchased;

    // total price
    total_cost = amount_purchased * cost_each;

    // set decimals
    cout << setprecision(2) << fixed;
    
    // result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;



    return 0; 



}




















