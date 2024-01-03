#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    /********1. Selection control struture : If else-if if ladder********/
    //if((age<18) && (age>0)){
    //    cout<<"You can not get party pass";
    //}
    //else if(age==18){
    //    cout<<"You are kid you get kid pass";
    //}
    //else if(age<1){
    //    cout<<"You are not yet born";
    //}
    //else{
    //    cout<<"You can get party pass";
    //}
    /********2. Selection control struture : switch case statements********/
    switch (age)
    { 
     case 18:
     cout<<"You are teenger"<<endl;
     break;
    
    case 20:
     cout<<"You are in your twenties"<<endl;
     break;
    
    default:
    cout<<"No special Cases"<<endl;
        break;
    }
    return 0;
}