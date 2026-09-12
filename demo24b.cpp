#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "the point is (" << x << "," << y << ")" << "\n";
    }
};

int main()
{
    Point p(4, 6);
    p.displayPoint();
    Point q(9, 7);
    q.displayPoint();
    return 0;
}
// code by tanay30