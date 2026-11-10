#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelRate, price, time, speed, fuel, cost;
    int hours, minutes;
    
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter travel time in minutes: ";
     cin >> minutes;

    cout << "Enter fuel use per 100 km: ";
    cin >> fuelRate;

    cout << "Enter fuel price per liter: ";
    cin >> price;

    time = hours + (minutes / 60.0);

    speed = distance / time;
    fuel = (distance * fuelRate) / 100.0;
    cost = fuel * price;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel << " liters" << endl;
    cout << "Fuel cost: " << cost << " birr" << endl;

    return 0;
}
