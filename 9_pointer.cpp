#include<iostream>
using namespace std;
int main(){
    //What is pointer ----> Data type which stores the address of other data type
    int a = 45;
    int* b = &a;
    b = &a;

    // & ---->(Address of) Operator
    cout<<"The Address of a is "<<b<<endl;
    cout<<"The Address of a is "<<&a<<endl;

    //* ----->(Value at)Dereference Operator
    cout<<"The value at address is "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address(address b) is "<<**c<<endl;
    return 0;
}