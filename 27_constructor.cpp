#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //creating a constructor
    //constructor is a special member function with same name ass of the class.
    //It is used to initilize the of the its class
    //It is automatically invoked whenever the object is created

    complex(void); //constructor declaration
    void printNumber(){
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(void)//---> This is default constructor as its no parameters
{
    a=10;
    b=0;
    cout<<"Hello world!"<<endl;
}
int main(){
    complex c;
    c.printNumber();
    return 0;
}

//Charactristics of constructors

//1.It should be declared in the public section of the class
//2.They are automatically invoked whenever the object is created
//3.They cannot return values and do not have return types 
//4.It can have default argumentd
//5.we cannot refer to their address