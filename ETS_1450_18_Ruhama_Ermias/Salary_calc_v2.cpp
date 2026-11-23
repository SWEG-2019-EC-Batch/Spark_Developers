 
#include <iostream>
using namespace std;

int main()
{
    const int workinghour = 40;

    double gross, net, pension, tax, base, bonus , bonusrate, penalty, hourlyrate;
    int employeeType, choice, hour;

    cout << "SALARY CALCULATOR" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Choose employee type: ";
    cin >> employeeType;

    if (employeeType == 1)
    {
        cout << "Enter hours worked per week: ";
        cin >> hour;

        cout << "Enter base salary: ";
        cin >> base;

        if (hour > workinghour)
        {
            cout << "Enter bonus rate per hour: ";
            cin >> bonusrate;

            bonus = bonusrate * (hour - workinghour);
            gross = base + bonus;
            penalty = 0;
        }
        else if (hour < workinghour)
        {
            penalty = (workinghour - hour) * (base / workinghour);
            gross = base - penalty;
        }
        else
        {
            gross = base;
            penalty = 0;
        }

        pension = gross * 0.07;

        if (gross <= 3500)
        {
            tax = 0;
        }
        else if (gross <= 10000)
        {
            tax = gross * 0.10;
        }
        else if (gross <= 25000)
        {
            tax = gross * 0.15;
        }
        else if (gross <= 50000)
        {
            tax = gross * 0.20;
        }
        else if (gross <= 100000)
        {
            tax = gross * 0.25;
        }
        else
        {
            tax = gross * 0.30;
        }

        net = gross - tax - pension;
    }

    else if (employeeType == 2)
    {
        // LABORER CALCULATION

        cout << "Enter total hours worked: ";
        cin >> hour;

        cout << "Enter hourly rate: ";
        cin >> hourlyrate;

        gross = hour * hourlyrate;

        int hasBonus;

        cout << "Does the laborer have a bonus? (1 = Yes, 0 = No): ";
        cin >> hasBonus;

        if (hasBonus == 1)
        {
            cout << "Enter bonus amount: ";
            cin >> bonus;
        }

        int damagedMachine;

        cout << "Did the laborer have to pay penality? (1 = Yes, 0 = No): ";
        cin >> damagedMachine;

        if (damagedMachine == 1)
        {
            cout << "Enter the amount of penalty: ";
            cin >> penalty;
        }
        else
        {
            penalty = 0;
        }

        gross = gross + bonus;

        tax = 0;
        pension = 0;

        net = gross - penalty;
    }

    else
    {
        cout << "Invalid employee type!" << endl;
        return 0;
    }

    cout << "\nWhat do you want to see?" << endl;
    cout << "1. Gross salary" << endl;
    cout << "2. Net salary" << endl;
    cout << "3. Bonus" << endl;
    cout << "4. Pension" << endl;
    cout << "5. Tax" << endl;
    cout << "6. Penalty" << endl;
    cout << "7. All details" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Gross salary = " << gross << endl;
        break;

    case 2:
        cout << "Net salary = " << net << endl;
        break;

    case 3:
        cout << "Bonus = " << bonus << endl;
        break;

    case 4:
        cout << "Pension = " << pension << endl;
        break;

    case 5:
        cout << "Tax = " << tax << endl;
        break;

    case 6:
        cout << "Penalty = " << penalty << endl;
        break;

    case 7:
        cout << "\n----- SALARY DETAILS -----" << endl;
        cout << "Gross salary = " << gross << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Penalty = " << penalty << endl;
        cout << "Pension = " << pension << endl;
        cout << "Tax = " << tax << endl;
        cout << "Net salary = " << net << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
