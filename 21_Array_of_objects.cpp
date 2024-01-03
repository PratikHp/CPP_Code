#include<iostream>
using namespace std;

class employee{
    int Id;
    int salary;
    public:
        void setId(void){
            cout<<"Enter the Id of employee"<<endl;
            cin>>Id;
        }
        void getId(void){
            cout<<"The Id of this employee is "<<Id<<endl;
        }
};

int main(){
    //employee pratik,rohan,lovish,shruti;

    //pratik.setId();
    //pratik.getId();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}