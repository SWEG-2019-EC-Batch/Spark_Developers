#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    // Step 1 : Read the constants and variables 
    int hours, minutes;
    double distance, fuel, price,average_speed, fuel_cost, fuel_used;
    // Step 2: Read the input
    cout << "Enter the distance travelled in km: ";
    cin >> distance;
    cout << "Enter the time taken in hours and minutes: ";
    cin >> hours >> minutes;
    cout << "Enter the fuel consumed in litres: ";
    cin >> fuel;
    cout << "Enter the price of fuel per litre: ";
    cin >> price;
    // Step 3: Calculation
    average_speed = distance / (hours + minutes / 60);
    fuel_cost = fuel * price;
    fuel_used = (distance * fuel )/ 100;
    // Step 4: Display the result
    cout << fixed << setprecision(2);
    cout << "Average speed(km/h): " << average_speed << " km/h" << endl;
    cout << "Fuel used: " << fuel_used << " litres" << endl;
    cout << "Fuel cost: " << fuel_cost << " Birr" << endl;
}