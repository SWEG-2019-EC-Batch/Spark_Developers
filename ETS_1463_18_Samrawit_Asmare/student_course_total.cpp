#include <iostream>

#include <iomanip>

using namespace std;
int main(){

float assignment_result,mid_result,final_result;

float assignment,mid,Final,total;

const float assignment_percent=0.2;

const float mid_percent=0.3;

const float final_percent=0.5;


cout<<"enter assignment_result:";
cin>>assignment_result;


cout<<"enter mid_result:";
cin>>mid_result;


cout<<"enter final_result:";
cin>>final_result;


assignment = assignment_percent * assignment_result;
mid = mid_percent * mid_result;
Final= final_percent * final_result;
total=assignment+mid+Final;


cout <<fixed<< setprecision(1);
cout <<"total="<<total<<endl;


cout << "result=" << (total >= 50 ? "pass" : "fail") << endl;


return 0;
}