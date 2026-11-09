#include <iostream>
#include<iomanip>
#define service_charge 10.0
using namespace std;
int main  (){
    // Step 1 : Read the constants and variables
    int Electricity_units;
    double energy_charge, total_bill;
    // Step 2: Read the input
    cout << "Enter the number of electricity units used this month: ";
    cin >> Electricity_units;
    // Step 3: Calculate the energy charge
    energy_charge = (Electricity_units <= 50) ? Electricity_units * 1.5 : (50 * 1.5 + (Electricity_units - 50) * 2.0);
    // Step 4: Calculate the total bill
    total_bill = energy_charge + service_charge;
    // Step 5: Display the result
    cout << fixed << setprecision(2);
    cout << "Energy Charge: " << energy_charge << "Birr" << endl;
    cout << "Service Charge: " << service_charge << "Birr" << endl;
    cout << "Total Bill: " << total_bill << "Birr" << endl;

}