/*
CSC 134
M2 Lab
josiahw
3/6/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // constants/ cost
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5; 

    // variables
    double length, 
              width, 
              height, 
              volume, 
              cost, 
              charge, 
              profit;

    // formatting
    cout << setprecision(2) << fixed << showpoint;

    // ask user for dimensions of crate
    cout << "Enter the dimensions of the crate  (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // calculate volume
    // charge & profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // display data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}
