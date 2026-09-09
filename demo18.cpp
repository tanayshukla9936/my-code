#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << "\n";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number" << count << endl;
        // cout<<id;
    }

    static void getCount(void)
    {
        cout << "the value of cout " << count << "\n";
    }
};

// count is the data memeber of class Employee
int Employee::count; // defalt value  is 0

int main()
{
    Employee tanay, rudra, deepak;
    // tanay.id=1;
    // tanay.count=1;     ---> cannot do this as id and count are private
    tanay.setData();
    tanay.getData();
    Employee::getCount();

    rudra.setData();
    rudra.getData();
    Employee::getCount();

    deepak.setData();
    deepak.getData();
    Employee::getCount();
    return 0;
}
// code by tanay24