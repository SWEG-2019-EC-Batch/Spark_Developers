#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Declare variables
    double assignment_mark, midterm_mark, final_exam_mark;
    double assignment_weighted_mark, midterm_weighted_mark, final_exam_weighted_mark;
    double total_mark;

    // Step 2: Input marks
    cout << "Enter the assignment mark: ";
    cin >> assignment_mark;

    cout << "Enter the midterm mark: ";
    cin >> midterm_mark;

    cout << "Enter the final exam mark: ";
    cin >> final_exam_mark;

    // Step 3: Calculate weighted marks
    assignment_weighted_mark = (assignment_mark * 20) / 100;
    midterm_weighted_mark = (midterm_mark * 30) / 100;
    final_exam_weighted_mark = (final_exam_mark * 50) / 100;

    // Step 4: Calculate total
    total_mark = assignment_weighted_mark + midterm_weighted_mark + final_exam_weighted_mark;

    // Step 5: Display the total to one decimal place
    cout << fixed << setprecision(1);
    cout << "Total: " << total_mark << endl;

    // Step 6: Display Pass or Fail using the conditional operator
    (total_mark >= 50) ? cout << "Pass" : cout << "Fail";

    return 0;
}
