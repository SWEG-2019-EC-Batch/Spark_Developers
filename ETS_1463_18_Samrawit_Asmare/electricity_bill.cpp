#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int unit;

float energy_charge, total_bill;
const int service_charge=10;

// read electricity unit used
cout <<"enter unit used:";
cin >> unit;

energy_charge= (unit<=50)? unit * 1.5 : (50 * 1.5) + ((unit - 50) * 2);
total_bill = energy_charge + service_charge;

cout <<fixed<<
setprecision(2);

cout <<"energy_charge"<<
energy_charge<< endl;//birr

cout <<"total_bill"<<
total_bill<< endl;//birr

return 0;
}