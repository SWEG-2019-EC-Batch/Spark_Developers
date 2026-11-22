#include <iostream>
using namespace std;
#define REGULAR_HOURS 40
int main()
{
    // defining the variables
    double base_salary, bonus_pay, bonus_rate, hourly_rate, hourly_salary, gross_salary, net_salary, tax_deduction, pension, penality = 0.0;
    int payment, hours_worked, worker_type, bonus, deduction, punishment;
    // prompts

    cout << "Are you a labor worker or employee? (1 for labor worker, 2 for employee) : " << '\n';
    cin >> worker_type;

    if (worker_type == 1)
    {
        cout << "You are a labor worker " << '\n';

        cout << "Enter the pay per hour : " << endl;
        cin >> hourly_rate;

        cout << "Enter the number of hours worked : " << '\n';
        cin >> hours_worked;

        cout << "Do you have a bonus? (1 = yes, 0 = no) : " << endl;
        cin >> bonus;

        cout << "Do you have any deductions? (1 = yes, 0 = no) : " << endl;
        cin >> deduction;
        if (bonus == 1 && deduction == 0)
        {
            cout << "Enter the bonus amount : " << endl;
            cin >> bonus_pay;
            punishment = 0;
        }
        else if (bonus == 0 && deduction == 1)
        {
            cout << "Enter deduction amount : " << endl;
            cin >> punishment;
            bonus_pay = 0;
        }
        else if (bonus == 1 && deduction == 1)
        {
            cout << "You cant have both bonus and deduction at the same time" << endl;
        }
        else if (bonus == 0 && deduction == 0)
        {
            bonus_pay = 0;
            punishment = 0;
        }
        else
        {
            cout << "Invalid input " << endl;
        }

        hourly_salary = hourly_rate * hours_worked;
        gross_salary = hourly_salary + bonus_pay;
        net_salary = gross_salary - punishment;
        tax_deduction = 0;
        pension = 0;
        penality = punishment;
    }
    else if (worker_type == 2)
    {
        cout << "You are an employee " << '\n';
        cout << "Enter your base salary : " << '\n';
        cin >> base_salary;

        cout << "Enter the number of hours worked : " << '\n';
        cin >> hours_worked;

        cout << "Enter your bonus rate : " << '\n';
        cin >> bonus_rate;

        // calculations

        if (hours_worked >= 40)
        {
            bonus_pay = (hours_worked - REGULAR_HOURS) * bonus_rate;
        }
        else
        {
            bonus_pay = 0;
            penality = base_salary - (base_salary * 0.1);
        }

        gross_salary = base_salary + bonus_pay - penality;
        pension = gross_salary * 0.07;
        hourly_salary = gross_salary / hours_worked;

        if (gross_salary <= 3500)
        {
            net_salary = gross_salary;
            tax_deduction = 0;
        }
        else if (gross_salary > 3500 && gross_salary <= 10000)
        {
            tax_deduction = gross_salary * 0.01;
            net_salary = gross_salary - tax_deduction;
        }
        else if (gross_salary > 10000 && gross_salary <= 25000)
        {
            tax_deduction = gross_salary * 0.15;
            net_salary = gross_salary - tax_deduction;
        }
        else if (gross_salary > 25000 && gross_salary <= 50000)
        {
            tax_deduction = gross_salary * 0.2;
            net_salary = gross_salary - tax_deduction;
        }
        else if (gross_salary > 50000 && gross_salary <= 100000)
        {
            tax_deduction = gross_salary * 0.25;
            net_salary = gross_salary - tax_deduction;
        }
        else if (gross_salary > 100000)
        {
            tax_deduction = gross_salary * 0.3;
            net_salary = gross_salary - tax_deduction;
        }
    }

    else
    {
        cout << "Invalid input " << '\n';
    }

    cout << "Enter which you want to see (1 for all , 2 for gross salary, 3 for bonus , 4 for tax deduction, 5 for net salary, 6 for pension, 7 for penality, 8 for hourly salary) : " << '\n';
    cin >> payment;

    // switch case for output payment prompts

    switch (payment)
    {
    case 1:
        cout << "Your gross salary is : " << gross_salary << "ETB" << '\n';
        cout << "Your hourly salary is : " << hourly_salary << "ETB" << '\n';
        cout << "Your tax deduction is : " << tax_deduction << '\n';
        cout << "Your bonus pay is : " << bonus_pay << "ETB" << '\n';
        cout << "Your penality is : " << penality << "ETB" << '\n';
        cout << "Your net salary is : " << net_salary << "ETB" << '\n';
        cout << "Pension : " << pension << "ETB" << '\n';
        break;
    case 2:
        cout << "Your gross salary is  : " << gross_salary << "ETB" << '\n';
        break;
    case 3:
        cout << "Your bonus pay is : " << bonus_pay << "ETB" << '\n';
        break;
    case 4:
        cout << "Your tax deduction is  :" << tax_deduction << '\n';
        break;
    case 5:
        cout << "Your net salary is : " << net_salary << "ETB" << '\n';
        break;
    case 6:
        cout << "Pension : " << pension << "ETB" << '\n';
        break;
    case 7:
        cout << "Your penality amount : " << penality << "ETB" << '\n';
        break;
    case 8:
        cout << "Your hourly salary is : " << hourly_salary << "ETB" << '\n';
        break;
    default:
        cout << "You havent chosen anything " << '\n';
        break;
    }
    return 0;
}
