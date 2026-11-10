#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 float  assignment, midterm, finalExam, total;
// all marks out of 100
    cout << "Enter assignment mark out of 100: ";
    cin >> assignment;

    cout << "Enter midterm mark out of 100: ";
    cin >> midterm;

    cout << "Enter final exam mark out of 100: ";
    cin >> finalExam;

    total = (assignment * 0.20) + (midterm * 0.30) + (finalExam * 0.50);

    cout << fixed << setprecision(1);

    cout << "Total: " << total << endl;
    cout << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
}