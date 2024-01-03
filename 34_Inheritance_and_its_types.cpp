#include<iostream>
using namespace std;

//Base class
class employee{
    int id;
    public:
    float salary;
          employee(int inpId){
            id = inpId;
            salary = 34;
            }
};
//Derived class syntax
/*class {{derivd - class- name}} : {{visibility-mode}} {{base-class}}
{
    class members/methods/etc...
}
Notes:
1.Defualt visiblity mode is private
2.Public visibility mode :Public members of the base class becomes public members of the derived class
3.Private  visibility mode :Public members of the base class becomes private members of the derived class
4.Private  members are never inherited
*/

//Creating a programmer class derived from employee base class

class Programmer : employee{
    public:
    int languageCode = 9;
    
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    return 0;
}