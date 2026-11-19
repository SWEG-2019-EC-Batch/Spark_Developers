#include <iostream>
using namespace std;

int main()
{
    int weight, cost, total, seat, age, destination, tripfare;
    int discount = 0;
    char student;

    cout << "choose your destination: " << endl;

    cout << "1.Adama" << endl;
    cout << "2. Mekele" << endl;
    cout << "3.Jimma" << endl;
    cout << "4.Hawassa" << endl;
    cout << "5.Dire" << endl;

    cout << "enter your destination: ";
    cin >> destination;

    switch (destination)
    {
    case 1:
        tripfare = 300;
        cout << "destination " << destination << endl;
        break;
    case 2:
        tripfare = 700;
        cout << "destination " << destination << endl;
        break;
    case 3:
        tripfare = 900;
        cout << "destination " << destination << endl;
        break;
    case 4:
        tripfare = 500;
        cout << "destination " << destination << endl;
        break;
    case 5:
        tripfare = 1000;
        cout << "destination " << destination << endl;
        break;
    default:
        cout << "invalied input";
    }

    cout << "Enter number of sit avaliable: ";
    cin >> seat;

    if (seat > 0)
    {
        cout << "how old are you: ";
        cin >> age;
        cout << "Are you student? (y/n): ";
        cin >> student;
        cout << "Enter your bag weight in kg: ";
        cin >> weight;

        total = tripfare;
        cost = 0;

        if (weight > 20)
        {
            cost = (weight - 20) * 10;
            total = tripfare + cost;
        }

        if (age < 12 || age > 60)
        {
            discount += 50;
        }

        if (student == 'y')
        {
            discount += 30;
        }
        total = total - (total * discount / 100);
        cout << "your trip fare is: " << tripfare << endl;
        cout << "your luggage fare is: " << cost << endl;
        cout << "you get discount: " << total * discount / 100 << endl;
        cout << "you have to pay: " << total << endl;
    }
    else
        cout << "All seats are sold out " << endl;
    return 0;
}
