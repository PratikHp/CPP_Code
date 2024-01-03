#include<iostream>
using namespace std;
class employee{
    int Id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>Id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<Id<<"and this is employee number "<<count<<endl;
        }

        static void getCount(void){
            //cout<<Id;//Throws an Error only static variable are allowed
            cout<<"The value of count "<<count<<endl;
        }
};

//Count is the static data member of class Employee
int employee::count;//=1000;//Default value is 0
int main(){
    employee pratik,rohan,ram;
    //harry.id = 1;
    //harry.count=1;// cannot do this as id and count are private
    
    pratik.setData();
    pratik.getdata();
    employee::getCount();

    rohan.setData();
    rohan.getdata();
    employee::getCount();

    ram.setData();
    ram.getdata();
    employee::getCount();
    return 0;
}