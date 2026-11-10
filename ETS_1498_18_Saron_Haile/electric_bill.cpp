#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Declare variables
    int units;
    double energy_charge, total_bill;
    const double service_charge_value = 10.00; // Fixed service charge

    // Step 2: Input electricity units consumed
    cout << "Enter electricity units consumed: ";
    cin >> units;

    // Step 3: Calculate energy charge
    energy_charge  = (units <= 50) ? units * 1.50 : (50 * 1.50) + (units - 50) * 2.00;
    
    // Step 4: Calculate total bill
    total_bill = energy_charge + service_charge_value;

    // Step 5: Display bill with two decimal places
    cout << fixed << setprecision(2);
    cout << "Energy Charge: " << energy_charge << " birr" << endl;
    cout << "Service Charge: " << service_charge_value << " birr" << endl;
    cout << "Total Bill: " << total_bill << " birr" << endl;
    return 0; 

}
