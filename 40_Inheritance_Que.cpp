/*
Create 2 classes:
    1. Simplecalcualtor - Tjes input of 2 numbers using a utility function and perform +,-,*,/ and
    display the results using another function.
    2.Scietificcalculator - Takes input of 2 numbers using a utility function and perform any four
    scientific operation of your choice and display the result using anothe function.

Create another class HybridCalculator and inherit it using these 2 classes :
Q1.What type of Inheritance are you using?
Q2.Which mode of Inheritance are you using?
Q3.Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented

*/

#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
protected:
    int a, b;

public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
    int div(int a, int b)
    {
        return a / b;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};

class scientificcalculator
{
protected:
    float sqt, cbt, sbt, cqt;

public:
    float set_sqt(float x)
    {
        sqt = sqrt(x);
    }
    float set_sbt(float y)
    {
        sbt = sqrt(y);
    }
    float set_cbt(float z)
    {
        cbt = cbrt(z);
    }
    float set_cqt(float w)
    {
        cqt = cbrt(w);
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator
{
public:
    float show()
    {
        cout << "The value of Addition is " << sum(10, 5) << endl;
        cout << "The value of Substraction is " << sub(10, 5) << endl;
        cout << "The value of Multiplication is " << multi(10, 5) << endl;
        cout << "The value of Division is " << div(10, 5) << endl;
        cout << "The square root of x is " << sqt << endl;
        cout << "The square root of y is " << sbt << endl;
        cout << "The cube root of z is " << cbt << endl;
        cout << "The cube root of w is " << cqt << endl;
    }
};

int main()
{
    hybridcalculator hp;
    hp.set_sqt(25);
    hp.set_sbt(36);
    hp.set_cbt(8);
    hp.set_cqt(27);
    hp.show();
    return 0;
}