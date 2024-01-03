#include<iostream>
using namespace std;

int main(){
    //Arrays Example
    int mark[]={98, 97, 96, 95};
    // int mathmark[4];
    // mathmark[0]=90;
    // mathmark[1]=95;
    // mathmark[2]=100;
    // mathmark[3]=90;
    // cout<<"These are marks"<<endl;
    // cout<<mark[0]<<endl;
    // cout<<mark[1]<<endl;
    // You can change the value of an array
    // mark[2] = 99;
    // cout<<mark[2]<<endl;
    // cout<<mark[3]<<endl;
    // cout<<"These are maths marks"<<endl;
    // cout<<mathmark[0]<<endl;
    // cout<<mathmark[1]<<endl;
    // cout<<mathmark[2]<<endl;
    // cout<<mathmark[3]<<endl;

    //for (int i = 0; i < 4; i++)
    //{
    //    cout<<"The value of marks "<<i<<" is "<<mark[i]<<endl;
    //}
    //int i=0;
    /*while (i<=3)
    {
        cout<<"The value of marks "<<i<<" is "<<mathmark[i]<<endl;
        i++;
    }*/
    /*do{
        cout<<"The value of maths marks "<<i<<" is "<<mathmark[i]<<endl;
        i++;
    }
    while(i<4);*/

    //Pointers and arrays
    int* p = mark;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    
    return 0;
}