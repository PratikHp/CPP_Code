#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
         void setdata(int a, float b){
            id = a;
            price = b;
         }
         void getdata(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
         }
};
//   1   2   3    
//           ^
//           |
//           |
//           |
//          ptr
//  ptrtemp

int main(){
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int [34];
    // general store
    // veggies
    // hardware
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    return 0;
}