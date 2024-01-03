#include<iostream>
using namespace std;

int main(){
    /***Loops in C++****/
    /* 1.For Loop
       2.While Loop
       3.Do While Loop
       */
    //For Loop in c++
    //int i=1;
    //cout<<i;
    //i++;

    /*Syntax for For Loop
    for(intialization ; condition ; increment){
        Loop Body(c++ code);
    }*/

    int i = 0;
    for( i = 0; i<40; i++){
        cout<<i<<endl;
    }

    //While Loop in c++
    /*while (conditions )
    {
        C++ Statements;
    }*/

    //Printing 1 to 40 using while loop
    /*int i = 1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }*/

    //Do while loop in c++
    // int i = 0;
    // do
    // {
    //   cout<<i<<endl;
    //   i++;
    // } while (i<=40);
    
    return 0;
}