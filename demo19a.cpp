#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << " the id of employee";
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of the employee is " << id << "\n";
    }
};
int main()
{
    // Employee tanay, rudra, deepak;
    // tanay.setId();
    // tanay.getId();
    Employee fb[4];
    for (int i = 0; i <= 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
// code by tanay25