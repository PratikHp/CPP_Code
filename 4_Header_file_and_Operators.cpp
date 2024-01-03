//There are two types of header files :
//1. System header files: It comes with the compiler 
#include<iostream>
//2. User defined files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is not present in current directory

using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of Operators in c++"<<endl;
    //Airthmatic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "  <<a++<<endl;
    cout<<"The value of a-- is" <<a--<<endl;
    cout<<"The value of --a is "  <<++a<<endl;
    cout<<"The value of ++a is "  <<--a<<endl; 

    //Asingnment Operators --> used to assign values to variables
    // int a=3, b=9;
    //char d='d';

    //Comparison Operators 
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl; 
    cout<<"The value of a != b is "<<(a!=b)<<endl;

    //Logical Operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of and logical operators is ((a==b) && (a<b))"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of or logical operators is ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of not logical operators is (!(a==b)) is:"<<(!(a==b))<<endl; 
    return 0;
}