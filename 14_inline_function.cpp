#include<iostream>
using namespace std;
inline int product(int a, int b){
    //Not reccomended to use below lines with inline functions
    // static int c = 0;//this executes only once
    // c = c+1; //Next time this function is run, the value of c will be related
    return a*b;
}
float moneyReceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;

} 
// int strlen(const char *p){

//}
int main(){
    //  int a, b;
    //  cout<<"Enter the value of a and b "<<endl;
    //  cin>>a>>b;
    //  cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP:If you have "<<money<<" Rs in your bank accout, you will recive "<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl;

    return 0;
}