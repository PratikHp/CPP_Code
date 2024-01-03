#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    //struct employee kp;
    //ep hp;

    //union money m1;
    //m1.rice = 34;
    //cout<<m1.rice<<endl;

    enum meal{breakfast,lunch,dinner};
    meal m1 = dinner;
    cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // hp.eId = 1;
    // hp.favChar = 'C';
    // hp.salary = 500000000.00;
    // cout<<"The value is "<<hp.eId<<endl;
    // cout<<"The value is "<<hp.favChar<<endl;
    // cout<<"The value is "<<hp.salary<<endl;
return 0;
}