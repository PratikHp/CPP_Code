#include<iostream>
using namespace std;

class Point{
    int x,y;
    public: 
        Point(int a, int b){
            x = a;
            y = b;
        } 
        void displaypoint(){
           cout<<"The point is ("<<x<<", "<<y<<")"<<endl; 
        }
};
/*Create a function(Hint : Make it a friend function ) which takes 2 point ojects and computes 
the distance between these 2 points
Examples to check your code
(1,1) and (1,1) is 0
(0,6) and (0,1) is 5
*/
int main(){
    Point p(1,1);
    p.displaypoint();

    Point q(4,6);
    q.displaypoint();
    return 0;
}