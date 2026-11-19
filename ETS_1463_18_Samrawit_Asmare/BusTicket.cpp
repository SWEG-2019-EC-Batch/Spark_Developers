#include <iostream>
using namespace std;

int main()
{
    float luggageweight, bagagefare = 0, totalfare, discount = 0;
    int noofseat, age;
    int student, destination;
    float fair_trip;

    cout << "noofseat: ";
    cin >> noofseat;

    if (noofseat > 0)
    {
        cout << "enter luggageweight: ";
        cin >> luggageweight;

        cout << "age: ";
        cin >> age;

        cout << "student: ";
        cin >> student;

        cout << "destination: ";
        cin >> destination;

        if (luggageweight > 20)
        {
            bagagefare = (luggageweight - 20) * 10;
        }

        // Trip fare
        if (destination == 1)
        {
            fair_trip = 1000;
        }
        else if (destination == 2)
        {
            fair_trip = 1200;
        }
        else
        {
            fair_trip = 1500;
        }

        totalfare = bagagefare + fair_trip;

        // Nested age conditions
        if (age < 12)
        {
            discount = 0.5 * totalfare;
            totalfare = totalfare - discount;
        }
        else
        {
            if (age > 60)
            {
                discount = 0.25 * totalfare;
                totalfare = totalfare - discount;
            }
        }

        // Student discount
        if (student)
        {
            discount = 0.3 * totalfare;
            totalfare = totalfare - discount;
        }

        // City using switch
        switch (destination)
        {
            case 1:
                cout << "Bahir Dar" << endl;
                break;

            case 2:
                cout << "Gondar" << endl;
                break;

            case 3:
                cout << "Hawassa" << endl;
                break;

            default:
                cout << "Invalid destination" << endl;
        }

        cout << "bagagefare: " << bagagefare << endl;
        cout << "trip fare: " << fair_trip << endl;
        cout << "discount: " << discount << endl;
        cout << "totalfare: " << totalfare << endl;
    }
    else
    {
        cout << "All seats are sold out" << endl;
    }

    return 0;
}