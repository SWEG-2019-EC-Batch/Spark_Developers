#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double energy, total;

    // Fixed service charge
    const double service = 10.00;

    // one unit is equal to one Killo watt per hour
    cout << "Enter electricity units: ";
    cin >> units;

    energy = (units <= 50)
             ? units * 1.50
             : (50 * 1.50) + (units - 50) * 2.00;

    total = energy + service;

    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << service << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}

