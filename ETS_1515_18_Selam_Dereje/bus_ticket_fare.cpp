#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int weight , total_trip_cost , fair_trip, luggage_fare = 0.0 , seats_available, age, route, student;
    fair_trip = 300;

    cout << "Enter your routes (1 for Hawassa, 2 for Dire, 3 for Jimma, 4 for Mekelle, 5 for Adama) : " << '\n';
     cin >> route;

    cout << "Enter the number of seats available : " << '\n';
    cin >> seats_available;


   if (seats_available < 0) {
        cerr << "All seats are sold out!" << '\n'; 
   }
   else {
        cout << "Enter the weight of your luggage (in kg): " << '\n';
        cin >> weight;

        cout << "Enter your age : " << '\n';
        cin >> age;

        cout << "Are you a student? (1 for yes, 0 for no): " << '\n';
        cin >> student;

        if (weight > 20 ) {
            luggage_fare = (weight - 20 ) * 10;
        }
        total_trip_cost = (fair_trip + luggage_fare);

     if (age <= 12) {
        total_trip_cost *= 0.5;
        }
        else if (student == 1) {
            total_trip_cost *= 0.7;
        }
        else {
            total_trip_cost = total_trip_cost;
        }
        
        switch (route){
          case 1:
               cout << "You have selected Hawassa route." << '\n';
               break;
          case 2:
               cout << "You have selected Dire route." << '\n';  
                break;
          case 3:
               cout << "You have selected Jimma route." << '\n';
                break;
          case 4:
               cout << "You have selected Mekelle route." << '\n';
               break;
          case 5:
               cout << "You have selected Adama route." << '\n';
               break;
          default:
               cout << "You havent picked a route." << '\n';
               break;
        }

        

        cout << "Your luggage weight is : " << weight << " kg" << '\n';
        cout << "Your luggage fare is : " << luggage_fare << '\n';
        cout << "Your fare trip cost is : " << fair_trip << " Birr " <<'\n';
        cout << "Your total trip cost is : " << total_trip_cost << "Birr" << '\n';
   }
  return 0;
   }

 