#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float distance, travel_time, price_per_liter;
    float fuel_per_100km, fuel_used;
    int hours, minutes;
    float speed, fuel_cost;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Distance: ";
    cin >> distance;

    cout << "Price per liter: ";
    cin >> price_per_liter;

    cout << "Enter fuel use per 100 km: ";
    cin >> fuel_per_100km;

    travel_time = hours + minutes / 60.0;

    speed = distance / travel_time;

    fuel_used = (distance / 100) * fuel_per_100km;

    fuel_cost = price_per_liter * fuel_used;

    cout << fixed << setprecision(2);

    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel_used << " liters" << endl;
    cout << "Fuel cost: " << fuel_cost << " birr" << endl;

    return 0;
}