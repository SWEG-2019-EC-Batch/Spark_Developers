#include <iostream>
using namespace std;
int main(){
float basesalary, noofhr,bonusrate;
float grossalary, bonus=0, tax, netsalary, penality;
float pension;
int choice;

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

if (basesalary<=3500){
tax=0;
}

else if(basesalary > 3500 && basesalary<=10000){
tax= (0.1)* grossalary;
}

else if (basesalary >10000 && basesalary<=25000){
tax= (0.15) * grossalary;
}

else if (basesalary > 25000 && basesalary <=50000){
tax = (0.2) * grossalary;
}

else if (basesalary > 50000 && basesalary<=100000){
tax= (0.25) * grossalary;
}

else if (basesalary >100000){
tax= (0.3) * grossalary;
}
pension= 0.07 * grossalary;
netsalary = grossalary - tax - pension;

cout << "choose what u want to see" << endl;
cout << "1.grossalary" << endl;
cout << "2.bonus" << endl;
cout << "3.pension" << endl;
cout << "4.tax" << endl;
cout << "5.netsalary" << endl;

cout << "enter your choice" << endl;
cin>> choice;

switch(choice){
case 1:
cout << "grossalary" << endl;
break;

case 2:
cout << "bonus" << endl;
break;

case 3:
cout << "pension" << endl;
break;

case 4:
cout << "tax" << endl;
break;

case 5:
cout << "grossalary" <<grossalary<< endl;
cout << "penality" << endl;
cout << "bonus" << bonus<< endl;
cout << "pension="<< pension << endl;
cout << "tax" <<tax<< endl;
cout << "netsalary"<<netsalary << endl;
break;

default:
cout << "invalid" << endl;
}
return 0;
}

