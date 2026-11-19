#include <iostream>
using namespace std;

int main() {
    double luggage_weight, luggage_fare, n_seat, age, total_fare, total_discount;
    double age_discount = 0;
    double stud_discount = 0;
    int route;
    int fare_trip;
    bool isStudent;

    cout << "Enter a route: " << endl;
    cout << "1. Adama" << endl;
    cout << "2. Dire" << endl; 
    cout << "3. Jimma" << endl;
    cout << "4. Hawassa" << endl;
    cout << "5. Mekelle" << endl;
      cin >> route;
        switch (route) {
        case 1: 
        fare_trip = 300;
          cout << "You have selected Adama route" << endl;
          break;
        case 2:
        fare_trip = 700;
          cout << "You have selected Dire route" << endl;
          break;
        case 3:
        fare_trip = 900;
          cout << "You have selected Jimma route" << endl;
          break;
        case 4:
        fare_trip = 500;
          cout << "You have selected Hawassa route" << endl;
          break;
        case 5:
        fare_trip = 1000; 
          cout << "You have selected Mekelle route" << endl;
          break;
        default :
          cout << "Invalid route" << endl;
    }
    cout << "Enter number of seat: ";
    cin >> n_seat;

    if(n_seat > 0) {
    cout << "Enter luggage weight(in kg): ";
    cin >> luggage_weight;

      if(luggage_weight > 20) {
        luggage_fare = ((luggage_weight - 20) * 10) + fare_trip;
      }
      else {
        luggage_fare = fare_trip;
      }
      cout << "Enter age: ";
      cin >> age;
      if(age <= 12 || age >= 60) {
        age_discount = luggage_fare * 0.5;
      }
      cout << "Are you a student(1 for yes, 0 for no): ";
      cin >> isStudent;
      if(isStudent == 1){
        stud_discount = luggage_fare * 0.3;
      }
      total_discount = stud_discount + age_discount;
      total_fare = luggage_fare - total_discount;
      cout << "Luggage Weight: " << luggage_weight << " kg" << endl;
      cout << "Luggage Fare: " << luggage_fare << " Birr" << endl;
      cout << "Total Discount: " << total_discount << " Birr" << endl;
      cout << "Total Fare: " << total_fare << " Birr" << endl;
    }
      else {
        cout << "No seat is available" << endl;
      }
    return 0;
}

