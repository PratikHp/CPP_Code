#include<iostream>
using namespace std;

class number{
    int a; 
    public:
         number(){
            a = 0;
         }
         number(int num){
            a = num;
         }
         //When no copy is found , compiler supplies its own constructor
         number(number &obj){
            cout<<"The copy constructor called"<<endl;
            a =obj.a;
         }
         void display(){
            cout<<"The number for this object is "<<a<<endl;
         }
};
int main(){
    number x,y,z(100);
    x.display();
    y.display();
    z.display();

    number z1(x);//Copy constructor invoked
    z1.display();
    //z1 should exactly resemble z or x or y
    
    //z2 = z;//copy constructor not called
    number z3 = z;//copy constructor invoked
    return 0;
}