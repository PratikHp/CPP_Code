#include<iostream>
using namespace std;

class Base{
    int data1;//private by default and is not inheritable
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void Base :: setdata(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getdata1(){
    return data1;
}
int Base :: getdata2(){
    return data1;
}
class derived : private Base{//class being derived publically
    int data3;
    public:
       void process();
       void display();
};

void derived :: process(){
    setdata();//only this change required for private
    data3 = data2 * getdata1();
}
void derived :: display(){
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}


int main(){
    derived der;
    //der.setdata();
    der.process();
    der.display();
    return 0;
}