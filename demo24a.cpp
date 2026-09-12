#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << "\n";
    }
};

Complex::Complex(int x, int y) //---> This is parameterized constructor as it take 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);

    // Explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}
// code by tanay30