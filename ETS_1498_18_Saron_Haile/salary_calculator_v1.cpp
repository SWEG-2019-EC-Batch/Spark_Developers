/*input: base_salary, worked_hours, bonus_rate, choose;
process: 
 1. Initialize bonus_payment and penalty to 0.
 2. Set expected working hours to 40.
 3. If worked hours are greater than 40:
      a. Input bonus rate per hour.
      b. Calculate bonus payment.
 4. Otherwise:
      a. Calculate penalty for hours not worked.
 5. Calculate gross salary by adding bonus to base salary
    and subtracting penalty.
 6. Determine the tax rate based on gross salary.
 7. Calculate tax.
 8. Calculate pension (7% of gross salary).
 9. Calculate net salary by subtracting tax and pension
    from gross salary.
 10. Ask the user which information they want to display.
 11. Use a switch statement to display the selected
     information (bonus, gross salary, pension, tax,
     net salary, or all details).
 12. Display an invalid message if the user enters
     an option other than 1–6.
output: bonus_payment, gross_salary, pension, tax, net_salary*/ 
#include <iostream>
using namespace std;

int main() {
    double base_salary, bonus_rate;
    int worked_hours, choose;
    double gross_salary, tax, pension, net_salary;
    double penalty = 0;
    double bonus_payment = 0;
    const int expected_hours = 40;

    cout << "Enter base salary: ";
    cin >> base_salary;

    cout << "Enter hours worked: ";
    cin >> worked_hours;

    if (worked_hours > expected_hours) {
         cout << "Enter bonus rate(per hour): ";
        cin >> bonus_rate;

        bonus_payment = (worked_hours - expected_hours) * bonus_rate;
    }
    else {
        penalty = (expected_hours - worked_hours) * (base_salary / expected_hours);
    }    
    gross_salary = base_salary + bonus_payment  - penalty;
    if(gross_salary > 0 && gross_salary <= 3500) {
        tax = 0;
    }
    else if(gross_salary > 3500 && gross_salary <= 10000) {
        tax = gross_salary * 0.1;
    }
    else if(gross_salary > 10000 && gross_salary <= 25000) {
        tax = gross_salary * 0.15;
    }
    else if(gross_salary > 25000 && gross_salary <= 50000) {
        tax = gross_salary * 0.2;
    }
    else if(gross_salary > 50000 && gross_salary <= 100000) {
        tax = gross_salary * 0.25;
    }
    else {
        tax = gross_salary * 0.3;
    }
    pension = gross_salary * 0.07;
    net_salary = gross_salary - tax - pension;
    cout << "What do you want to see?" << endl;
    cout << "1. bonus" << endl;
    cout << "2. gross salary" << endl;
    cout << "3. pension" << endl;
    cout << "4. tax" << endl;
    cout << "5. net salary" << endl;
    cout << "6. all" << endl;
    cin >> choose;
    
    switch(choose) {
      case 1:
        cout << "Your bonus payment is: " << bonus_payment << endl;
        break;
      case 2:
        cout << "Your gross salary is: " << gross_salary << endl;
        break;
      case 3:
        cout << "Your pension is: " << pension << endl;
        break;
      case 4: 
        cout << "Your tax is: " << tax << endl;
        break;
      case 5:
        cout << "Your net salary is: " << net_salary << endl;
        break;
      case 6:
        cout << "Your bonus payment is: " << bonus_payment << endl;
        cout << "Your gross salary is: " << gross_salary << endl;
        cout << "Your pension is: " << pension << endl;
        cout << "Your tax is: " << tax << endl;
        cout << "Your net salary is: " << net_salary << endl;
        break;
          
      default:
        cout << "invalid" << endl;
    }      

    return 0;

}