#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
        //A & setdata(int a){
            this->a= a;
            //return *this;
        }
        void getdata(){
            cout<<"The value of a is "<<a;
        }
};
int main(){
    //This is keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setdata(4);
    a.getdata();
    
    return 0;
}