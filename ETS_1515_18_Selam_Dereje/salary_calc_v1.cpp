#include <iostream>
using namespace std;
#define REGULAR_HOURS 40
int main()
{
    // defining the variables
    double base_salary, bonus_pay, bonus_rate, gross_salary, net_salary, tax_deduction, pension, penality = 0.0;
    int payment, hours_worked;
    // prompts
    cout << "Enter your base salary : " << '\n';
    cin >> base_salary;

    cout << "Enter the number of hours worked : " << '\n';
    cin >> hours_worked;

    cout << "Enter your bonus rate : " << '\n';
    cin >> bonus_rate;

    cout << "Enter which you want to see (1 for all , 2 for gross salary, 3 for bonus , 4 for tax deduction, 5 for net salary, 6 for pension, 7 for penality) : " << '\n';
    cin >> payment;

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

    // switch case for output payment prompts

    switch (payment)
    {
    case 1:
        cout << "Your gross salary is : " << gross_salary << "ETB" << '\n';
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
    case 7 :
        cout << "Your penality amount : " << penality <<  "ETB" << '\n';
        break;
    default:
        cout << "You havent chosen anything " << '\n';
        break;
    }
    return 0;
}

