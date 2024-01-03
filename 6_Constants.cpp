#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //int a = 34;
    //cout<<"The value of a was: "<<a<<endl;
    //a= 45;
    //cout<<"The value of a is: "<<a<<endl;
    //*********constants in c++
    //const int a = 3;
    //cout<<"The value of a was: "<<a<<endl;
    //a = 45; //You will get an error because a is a constant
    //cout<<"The value of a is:"<<a<<endl;
    //*******Manipulators in cpp
    /*int a = 3, b = 78, c = 1233;
    cout<<"The value of a without stew is: "<<a<<endl;
    cout<<"The value of b without stew is: "<<b<<endl;
    cout<<"The value of c without stew is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;*/

    //******Operator Precedance
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
 }