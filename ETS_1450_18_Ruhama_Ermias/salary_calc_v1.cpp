#include <iostream>
using namespace std;

int main()
{
    const int workinghour = 40;
    double gross, net, pension, tax, base, bonus, bounsrate, penality;
    int choice, hour;

    cout << " how many hours did you work per week?: ";
    cin >> hour;

    cout << "enter your base salary: ";
    cin >> base;

    if (hour >= workinghour)
    {
        cout << "enter bouns rate per hour: ";
        cin >> bounsrate;

        bonus = bounsrate * (hour - workinghour);
        gross = base + bonus;
        penality = 0;
    }
    else if (hour < workinghour)
    {
        penality = ((workinghour - hour) * (base / workinghour));
        gross = base - penality;
    }
    gross = base - penality;
    pension = gross * 0.07;

    if (gross <= 3500)
    {
        tax = 0 * gross;
    }
    else if (gross > 3500 && gross <= 10000)
    {
        tax = 0.1 * gross;
    }
    else if (gross > 10000 && gross <= 25000)
    {
        tax = 0.15 * gross;
        pension = gross * 0.07;
    }
    else if (gross > 25000 && gross <= 50000)
    {
        tax = 0.2 * gross;
    }
    else if (gross > 50000 && gross <= 100000)
    {
        tax = 0.25 * gross;
    }
    else
    {
        tax = 0.3 * gross;
    }
    net = gross - tax - pension;

    cout << "what do you want to see: " << endl;
    cout << "1. gross_salary: " << endl;
    cout << "2. net_salary: " << endl;
    cout << "3. bouns: " << endl;
    cout << "4. pension: " << endl;
    cout << "5. tax: " << endl;
    cout << "6 penality: " << endl;
    cout << "7. all detail" << endl;

    cout << "enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "gross_salary = " << gross << endl;
        break;
    case 2:
        cout << "net_salary = " << net << endl;
        break;
    case 3:
        cout << "bouns = " << bonus << endl;
        break;
    case 4:
        cout << " pension =" << pension << endl;
        break;
    case 5:
        cout << "tax = " << tax << endl;
        break;
    case 6:
        cout << "penality = " << penality << endl;
        break;
    case 7:

        cout << "gross_salary =" << gross << endl;
        cout << "net_salary =" << net << endl;
        cout << "bouns =" << bonus << endl;
        cout << "pension =" << pension << endl;
        cout << "tax =" << tax << endl;
        break;

    default:
        cout << "invalid choice!" << endl;
    }
    return 0;
}

