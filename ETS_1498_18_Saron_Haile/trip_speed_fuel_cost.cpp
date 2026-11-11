#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Declare variables
    double distance, fuel_consumption, price_per_liter;
    double total_time, average_speed, fuel_used, fuel_cost;
    int hours, minutes;

    // Step 2: Input trip details
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;
    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuel_consumption;

    cout << "Enter price per liter (birr): ";
    cin >> price_per_liter;

    // Step 3: Convert travel time into hours
    total_time = hours + minutes / 60.0;

    // Step 4: Calculate average speed
    average_speed = distance / total_time;

    // Step 5: Calculate fuel used
    fuel_used = (distance * fuel_consumption) / 100;

    // Step 6: Calculate fuel cost
    fuel_cost = fuel_used * price_per_liter;

    // Step 7: Display results with two decimal places
    cout << fixed << setprecision(2);
    cout << "Average Speed: " << average_speed << " km/h" << endl;
    cout << "Fuel Used: " << fuel_used << " liters" << endl;
    cout << "Fuel Cost: " << fuel_cost << " birr" << endl;

    return 0;
}

