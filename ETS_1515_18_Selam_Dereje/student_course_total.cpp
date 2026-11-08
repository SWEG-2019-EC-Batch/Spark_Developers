#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
    // Step 1 : Read the constants and variables
    double assignment, mid ,final,total,mark30 , mark20, mark50;
    
     // Step 2: Read the input
    cout << "Enter assignment grade : ";
    cin >> assignment;
    cout << "Enter Midterm grade :  ";
    cin >> mid;
    cout << "Enter final grade : ";
    cin >> final;
    
    // Step 3 : Calculations
    mark20 = (assignment*20)/100;
    mark30 = (assignment*30)/100;
    mark50 = (assignment*50)/100;
    total = mark20 + mark30 + mark50;

    // Step 4 : Print the result
    cout << fixed << setprecision(1);
    cout << "Your final grade is " << total << '\n';
    cout << (total >= 50 ? "Passed!" : "Failed!") << endl;

    return 0;
    
}
