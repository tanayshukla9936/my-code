#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void simple::printData()
{
    cout << "the value of data is " << data1 << " and " << data2 << "\n";
}
int main()
{
    simple s(1, 5);
    s.printData();

    simple s1(2);
    s1.printData();
    return 0;
}
// code by tanay32