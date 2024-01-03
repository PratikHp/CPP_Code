/*3 useful classes
1- fstreambase
2- ifstream
3- ofstream

-Read Operation 
ifstream in("sample60");
string st;
in>>st;//Just like cin

-Write Operation
ofstream out("sample60");
string st = "Pratik";
out<<st; //Write to a file this.txt
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Connecting our file with hout stream
    ofstream hout("sample60");

    //Creating a name string and filling it with string entered by the user
    cout<<"Enter your Name"<<endl;
    string name;
    cin>>name;

    //Writing a string with file
    hout<<name;

    hout.close();

    ifstream hin("sample60");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}