#include <iostream>
using namespace std;
int main()
{
    // defining the variables
    double bonus_amount, hourly_rate, deduction, punishment, hourly_salary, gross_salary;
    int hours_worked, bonus;

    // prompts for input
    cout << "Enter the amount per hour : " << endl;
    cin >> hourly_rate;

    cout << "Enter the number of hours worked : " << '\n';
    cin >> hours_worked;

    cout << "Do you have a bonus? (1 = yes, 0 = no) : " << endl;
    cin >> bonus;

    cout << "Do you have any deductions? (1 = yes, 0 = no) : " << endl;
    cin >> deduction;

    // calculations
    if (bonus == 1 && deduction == 0)
    {
        cout << "Enter the bonus amount : " << endl;
        cin >> bonus_amount;
        punishment = 0;
    }
    else if (bonus == 0 && deduction == 1)
    {
        cout << "Enter deduction amount : " << endl;
        cin >> punishment;
        bonus_amount = 0;
    }
    else if (bonus == 1 && deduction == 1)
    {
        cout << "There is no bonus and deduction at the same time." << endl;
        cout << "Invalid input " << endl;
    }

    hourly_salary = hourly_rate * hours_worked;
    gross_salary = hourly_salary + bonus_amount - punishment;

    cout << "Your hourly salary is : " << hourly_salary << endl;
    cout << "Your bonus amount is : " << bonus_amount << endl;
    cout << "Your deduction amount is : " << punishment << endl;
    cout << "Your gross salary is : " << gross_salary << endl;

    return 0;
}
