#include <iostream>
using namespace std;

int main(){
    float basesalary, noofhr, bonusrate;
    float grossalary, bonus=0, tax, netsalary, penality=0;
    float pension;
    int choice;

    // New variables for laborer
    int employeetype;
    float hourlyrate, laborerbonus=0, machinerypenalty=0;

    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Enter employee type: ";
    cin >> employeetype;

    //EMPLOYEE 
    if(employeetype == 1){

        cout << "enter base salary" << endl;
        cin >> basesalary;

        cout << "enter no of hours" << endl;
        cin >> noofhr;

        cout << "enter bonus rate" << endl;
        cin >> bonusrate;

        if (noofhr<40){
            penality= (40-noofhr)*(basesalary/40);
            grossalary= basesalary - penality;
        }

        else if(noofhr>40){
            bonus= bonusrate * (noofhr-40);
            grossalary = basesalary + bonus;
        }

        else{
            grossalary=basesalary;
        }

        if (grossalary<=3500){
            tax=0;
        }

        else if(grossalary > 3500 &&
                grossalary<=10000){
            tax= (0.1)* grossalary;
        }

        else if (grossalary >10000 &&
                 grossalary<=25000){
            tax= (0.15) * grossalary;
        }

        else if (grossalary > 25000 &&
                 grossalary <=50000){
            tax = (0.2) * grossalary;
        }

        else if (grossalary > 50000 &&
                 grossalary<=100000){
            tax= (0.25) * grossalary;
        }

        else if (grossalary >100000){
            tax= (0.3) * grossalary;
        }

        pension= 0.07 * grossalary;
        netsalary = grossalary - tax - pension;

        cout << "choose what u want to see" << endl;
        cout << "1.grossalary" << endl;
        cout << "2.bonus" << endl;
        cout << "3.penality" << endl;
        cout << "4.pension" << endl;
        cout << "5.tax" << endl;
        cout << "6.netsalary" << endl;

        cout << "enter your choice" << endl;
        cin>> choice;

        switch(choice){

        case 1:
            cout << "grossalary" <<grossalary << endl;
            break;

        case 2:
            cout << "bonus" << bonus << endl;
            break;

        case 3:
            cout << "penality" << penality << endl;
            break;

        case 4:
            cout << "pension" << pension << endl;
            break;

        case 5:
            cout << "tax" << tax << endl;
            break;

        case 6:
            cout << "grossalary" <<grossalary << endl;
            cout << "penality" << penality << endl;
            cout << "bonus" << bonus << endl;
            cout << "pension=" << pension << endl;
            cout << "tax" << tax << endl;
            cout << "netsalary" << netsalary << endl;
            break;

        default:
            cout << "invalid" << endl;
        }
    }


    //LABORER
    else if(employeetype == 2){

        cout << "enter worked hours" << endl;
        cin >> noofhr;

        cout << "enter hourly rate" << endl;
        cin >> hourlyrate;

        cout << "enter bonus" << endl;
        cout << "(enter 0 if there is no bonus)" << endl;
        cin >> laborerbonus;

        cout << "enter machinery damage penalty" << endl;
        cout << "(enter 0 if there is no damage)" << endl;
        cin >> machinerypenalty;

        // Laborer's salary
        grossalary = noofhr * hourlyrate;

        // Add bonus
        grossalary = grossalary + laborerbonus;

        // No tax and no pension
        tax = 0;
        pension = 0;

        // Net salary
        netsalary = grossalary - machinerypenalty;

        cout << "choose what u want to see" << endl;
        cout << "1.grossalary" << endl;
        cout << "2.bonus" << endl;
        cout << "3.machinery penalty" << endl;
        cout << "4.pension" << endl;
        cout << "5.tax" << endl;
        cout << "6.netsalary" << endl;

        cout << "enter your choice" << endl;
        cin >> choice;

        switch(choice){

        case 1:
            cout << "grossalary = " << grossalary << endl;
            break;

        case 2:
            cout << "bonus = " << laborerbonus << endl;
            break;

        case 3:
            cout << "machinery penalty = "
                 << machinerypenalty << endl;
            break;

        case 4:
            cout << "pension = 0" << endl;
            break;

        case 5:
            cout << "tax = 0" << endl;
            break;

        case 6:
            cout << "worked hours = " << noofhr << endl;
            cout << "hourly rate = " << hourlyrate << endl;
            cout << "grossalary = " << grossalary << endl;
            cout << "bonus = " << laborerbonus << endl;
            cout << "machinery penalty = "
                 << machinerypenalty << endl;
            cout << "pension = 0" << endl;
            cout << "tax = 0" << endl;
            cout << "netsalary = " << netsalary << endl;
            break;

        default:
            cout << "invalid" << endl;
        }
    }

    else{
        cout << "invalid employee type" << endl;
    }

    return 0;
}