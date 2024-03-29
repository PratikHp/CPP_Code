#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass :public BaseClass{
    public:
         int var_derived;
         void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_base "<<var_derived<<endl;
         }

};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    
    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    //base_class_pointer->var_derived = 134; IT will throw an error 

    DerivedClass * derived_class_poitner;
    derived_class_poitner = &obj_derived;
    derived_class_poitner->var_derived = 98;
    derived_class_poitner->display();
    return 0;
}