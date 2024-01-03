#include<iostream>
using namespace std;
class animal{
    private:
    string a , b ,c;
    public:
    string d;
    void setdata(string a1, string b1, string c1);
    void getdata(){
        cout<<"The king of jungle "<<a<<endl;
        cout<<"The banana lover of jungle "<<b<<endl;
        cout<<"The fast runner of turtle and rabbit is "<<c<<endl;
        cout<<"The biggest animal of jungle "<<d<<endl;
    }
};
void animal::setdata(string a1,string b1,string c1){
    a= a1;
    b= b1;
    c= c1;
}
int main(){
    animal forest;
    forest.d = "Elephant";
    forest.setdata("Lion" , "Jaggu" , "Rabbit");
    forest.getdata();
    return 0;
}