#include<iostream>
using namespace std;

class Base1{
    public: 
        void greet(){
            cout<<"How are you?"<<endl;
        }

};
class Base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived : public Base1,public Base2{
    int a;
};

class B{
    int a;
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    int b;
    // public:
    //     void say(){
    //         cout<<"Hello Gentleman"<<endl;
    //     }
};
int main(){
    //Ambiguity 1
    // Base1 Base1obj;
    // Base2 Base2obj;
    // Base1obj.greet();
    // Base2obj.greet();
    // Derived d;
    // d.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}