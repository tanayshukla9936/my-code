#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initializ the objects of its class.
    // It is automatically invoked whenever an object is created.
    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << "\n";
    }
};

Complex::Complex(void)
{ // -----> This is a default constructor as it takes no parameter
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

/* Characterstics of constructor
1. It should declare in public section of the class.
2. They are automatically invoked whenever the object is created.
3. Do can not return values and do not have return types.
4. It can have default arguments.
5. we cannot refer to the address.
 */

// Code by tanay29