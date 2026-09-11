#include <iostream>
using namespace std;

// Forward decleration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring function as friend 
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
     friend int Calculator::sumCompComplex(Complex o1, Complex o2);

     // Alliter: Declaring the entire calculator class as friend
     friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << "\n";
    }
};


int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << "\n";
     int resc = calc.sumCompComplex(o1, o2);
    cout << "the sum of Comp part of o1 and o2 is " << resc << "\n";

    return 0;
}
// code by tanay27