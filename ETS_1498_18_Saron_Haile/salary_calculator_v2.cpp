
#include <iostream>
using namespace std;

int main() {
    int worker_type, worked_hours, choose;
    int has_bonus, has_damage;

    double base_salary, bonus_rate, hourly_rate;
    double bonus_payment = 0;
    double gross_salary, tax = 0, pension = 0, net_salary;
    double penalty = 0;
    const int expected_hours = 40;

    cout << "Select worker type:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Enter your choice: ";
    cin >> worker_type;

    if (worker_type == 1) { // employee

        cout << "Enter base salary: ";
        cin >> base_salary;

        cout << "Enter hours worked: ";
        cin >> worked_hours;

        if (worked_hours > expected_hours) {
            cout << "Enter bonus rate per hour: ";
            cin >> bonus_rate;

            bonus_payment = (worked_hours - expected_hours) * bonus_rate;
        }
        else {
            penalty = (expected_hours - worked_hours) * (base_salary / expected_hours);
        }

        gross_salary = base_salary + bonus_payment - penalty;

        // Calculate tax
        if (gross_salary > 0 && gross_salary <= 3500) {
            tax = 0;
        }
        else if (gross_salary > 3500 && gross_salary <= 10000) {
            tax = gross_salary * 0.10;
        }
        else if (gross_salary > 10000 && gross_salary <= 25000) {
            tax = gross_salary * 0.15;
        }
        else if (gross_salary > 25000 && gross_salary <= 50000) {
            tax = gross_salary * 0.20;
        }
        else if (gross_salary > 50000 && gross_salary <= 100000) {
            tax = gross_salary * 0.25;
        }
        else if (gross_salary > 100000) {
            tax = gross_salary * 0.30;
        }
        else {
            tax = 0;
        }

        pension = gross_salary * 0.07;
        net_salary = gross_salary - tax - pension;
    }

    else if (worker_type == 2) {
        // Laborer

        cout << "Enter hours worked: ";
        cin >> worked_hours;

        cout << "Enter hourly rate: ";
        cin >> hourly_rate;

        cout << "Does the laborer have a bonus? (1 = Yes, 0 = No): ";
        cin >> has_bonus;

        if (has_bonus == 1) {
            cout << "Enter bonus amount: ";
            cin >> bonus_payment;
        }
        else if (has_bonus != 0) {
            cout << "Invalid bonus choice!" << endl;
            return 0;
        }

        cout << "Did the laborer damage any machinery? (1 = Yes, 0 = No): ";
        cin >> has_damage;

        if (has_damage == 1) {
            cout << "Enter machinery damage penalty: ";
            cin >> penalty;
        }
        else if (has_damage != 0) {
            cout << "Invalid damage choice!" << endl;
            return 0;
        }

        gross_salary = (worked_hours * hourly_rate) + bonus_payment;

        // No tax or pension deductions for laborers
        tax = 0;
        pension = 0;

        net_salary = gross_salary - penalty;
    }

    else {
        cout << "Invalid worker type!" << endl;
        return 0;
    }

    // Display menu

    cout << "What do you want to see?" << endl;
    cout << "1. Bonus payment" << endl;
    cout << "2. Gross salary" << endl;
    cout << "3. Pension" << endl;
    cout << "4. Tax" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. Penalty" << endl;
    cout << "7. All" << endl;
    cout << "Enter your choice: ";
    cin >> choose;

    switch (choose) {
        case 1:
            cout << "Bonus payment: " << bonus_payment << endl;
            break;

        case 2:
            cout << "Gross salary: " << gross_salary << endl;
            break;

        case 3:
            if (worker_type == 2) {
                cout << "No pension deduction for laborers." << endl;
            }
            else {
                cout << "Pension: " << pension << endl;
            }
            break;

        case 4:
            if (worker_type == 2) {
                cout << "No tax deduction for laborers." << endl;
            }
            else {
                cout << "Tax: " << tax << endl;
            }
            break;

        case 5:
            cout << "Net salary: " << net_salary << endl;
            break;

        case 6:
            if (worker_type == 2) {
                cout << "Machinery damage penalty: " << penalty << endl;
            }
            else {
                cout << "Working hours penalty: " << penalty << endl;
            }
            break;

        case 7:
            cout << "Hours worked: " << worked_hours << endl;
            cout << "Bonus payment: " << bonus_payment << endl;
            cout << "Gross salary: " << gross_salary << endl;

            if (worker_type == 2) {
                cout << "Hourly rate: " << hourly_rate << endl;
                cout << "Machinery damage penalty: " << penalty << endl;
                cout << "Tax: No deduction" << endl;
                cout << "Pension: No deduction" << endl;
            }
            else {
                cout << "Working hours penalty: " << penalty << endl;
                cout << "Pension: " << pension << endl;
                cout << "Tax: " << tax << endl;
            }

            cout << "Net salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid option!" << endl;
    }

    return 0;
}
